package com.che.helloworld;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import com.che.helloworld.TwitterHelper.ApiException;

import android.content.Context;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.view.View.OnClickListener;
import android.view.inputmethod.InputMethodManager;
import android.widget.BaseAdapter;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    static final private int EXIT_ID = Menu.FIRST;

    private EditText m_search_key;
    private ImageButton m_btn_ok;
    private TextView m_header;
    private ListView m_tweet_list;
    private InputMethodManager im_ctrl;
    private JSONArray tweets;
    private LayoutInflater m_inflater;  // 为了布局更灵活？


    /**
     * Called when the activity is first created.
     */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        /* Use res/layout/main.xml as the view of
         * this Activity */
        setContentView(R.layout.activity_main);
        m_search_key = (EditText) findViewById(R.id.search_key);
        m_btn_ok = (ImageButton) findViewById(R.id.btn_ok);
        m_tweet_list = (ListView) findViewById(R.id.tweet_list);
        m_header = (TextView) findViewById(R.id.tweet_header);
        m_btn_ok.setOnClickListener(ok_handler);

        im_ctrl = (InputMethodManager) getSystemService(Context.INPUT_METHOD_SERVICE);
        m_inflater = LayoutInflater.from(this);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        super.onCreateOptionsMenu(menu);

        /* the context menu currently has only one option */
        menu.add(0, EXIT_ID, 0, R.string.exit);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        switch (item.getItemId()) {
            case EXIT_ID:
                finish(); /* terminate the application */
                return true;
        }
        return super.onOptionsItemSelected(item);
    }

    OnClickListener ok_handler = new OnClickListener() {
        @Override
        public void onClick(View v) {
            /* hide the soft keyboard */
            im_ctrl.hideSoftInputFromWindow(m_search_key.getWindowToken(), 0);

            new TwitterTask().execute("?per_page=50&q=" + Uri.encode(m_search_key.getText().toString()));

            /* show a brief message */
            Toast.makeText(getApplicationContext(), getString(R.string.search_msg) + " " + m_search_key.getText(), Toast.LENGTH_LONG).show();
        }
    };

    /* Params (String), Progress (Integer), Result (String) */
    private class TwitterTask extends AsyncTask<String, Integer, String> {
        @Override
        protected void onPreExecute() {
            // TODO Auto-generated method stub
            super.onPreExecute();
        }

        @Override
        protected String doInBackground(String... params) {
            String query = params[0];
            if (query == null) return "";

            try {
                return TwitterHelper.downloadFromServer(query);
            } catch (ApiException e) {
                e.printStackTrace();
                Log.e("HSD", "Problem making twitter search request");
            }
            return "";
        }

        @Override
        protected void onPostExecute(String result) {
            try {
                JSONObject obj = new JSONObject(result);
                tweets = obj.getJSONArray("items");

                if (tweets == null || tweets.length() == 0) {
                    Toast.makeText(getApplicationContext(),
                            "No tweets on " + m_search_key.getText(), Toast.LENGTH_LONG).show();
                } else
                    m_tweet_list.setAdapter(new JSONAdapter(getApplicationContext()));

            } catch (JSONException e) {
                e.printStackTrace();
            }

        }
    }

    /*--- ListAdapter for rendering JSON data ---*/
    private class JSONAdapter extends BaseAdapter {
        JSONAdapter(Context c)
        {
        }

        @Override
        public int getCount() {
            return tweets == null ? 0 : tweets.length();
        }

        @Override
        public Object getItem(int arg0) {
            return null;
        }

        @Override
        public long getItemId(int pos) {
            return pos;
        }

        @Override
        public View getView(int pos, View convertView, ViewGroup parent) {
            View tv;
            TextView t;

            if (convertView == null)
                tv = m_inflater.inflate(R.layout.item, parent, false); // 最关键的是这点
            else
                tv = convertView;

            try {
                JSONObject obj = tweets.getJSONObject(pos);

                t = (TextView) tv.findViewById(R.id.text);

                t.setText(obj.getString("full_name") + ": " + obj.getString("description"));

                t = (TextView) tv.findViewById(R.id.created_at);
                t.setText(obj.getString("created_at"));
            } catch (JSONException e) {
                Log.e("Che", e.getMessage());
            }
            return tv;
        }
    }
}
