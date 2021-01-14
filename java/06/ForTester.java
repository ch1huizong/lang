// T: 增强For循环遍历

import java.util.Enumeration;
import java.util.Vector;

public class ForTester {
  public static void main(String[] args) {
    Enumeration<String> days;
    Vector<String> v = new Vector();
    v.add("Sunday");
    v.add("Monday");
    v.add("Tuesday");
    v.add("Wednesday");
    v.add("Thursday");
    v.add("Friday");
    v.add("Saturday");
    days = v.elements();

    for (String day : v) {
      System.out.println(day);
    }
  }
}
