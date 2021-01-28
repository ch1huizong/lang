package com.che.helloworld;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import com.che.helloworld.TwitterHelper.ApiException;

import android.content.Context;
import android.os.AsyncTask;
import android.os.Bundle;
import android.text.util.Linkify;
import android.util.Log;
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
    private JSONArray jresult;

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

            new TwitterTask().execute(m_search_key.getText().toString());
            /* show a brief message */
            Toast.makeText(getApplicationContext(),
                    getString(R.string.hello) + " " + m_search_key.getText(),
                    Toast.LENGTH_LONG).show();
        }
    };

    /* Params (String), Progress (Integer), Result (String) */
    private class TwitterTask extends AsyncTask<String, Integer, String> {

        @Override
        protected String doInBackground(String... params) {
            String query = params[0];
            if (query == null) return "";
            try {
                String result = TwitterHelper.downloadFromServer(query);
                return result;
            } catch (ApiException e) {
                e.printStackTrace();
                Log.e("HSD", "Problem making twitter search request");
            }
            return "";
        }

        @Override
        protected void onPostExecute(String result) {
            m_tweet_list.setAdapter(new JSONAdapter(getApplicationContext()));
            try {
                JSONObject obj = new JSONObject(result);
                jresult = obj.getJSONArray("items");
                String info = obj.getString("total_count");
                m_header.setText(info);
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
    }

    /*--- ListAdapter for rendering JSON data ---*/
    private class JSONAdapter extends BaseAdapter {
        private Context mCtx;

        public JSONAdapter(Context c) {
            mCtx = c;
        }

        @Override
        public int getCount() {
            return jresult == null ? 0 : jresult.length();
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
            TextView tv;

            if (convertView == null)
                tv = new TextView(mCtx);
            else
                tv = (TextView) convertView;
            try {
                JSONObject obj = jresult.getJSONObject(pos);
                tv.setText(obj.getString("full_name") + ": " +
                        obj.getString("description"));
            } catch (JSONException e) {
                tv.setText(e.getMessage());
            }
            return tv;
        }
    }
}
