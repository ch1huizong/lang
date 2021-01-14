// T: 迭代器遍历集合元素

import java.util.Arrays;
import java.util.Iterator;
import java.util.Vector;

public class IteratorTester {
  public static void main(String[] args) {
    String[] num = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    Vector<String> v = new Vector<String>(Arrays.asList(num));

    System.out.println("Before Vector: " + v);
    Iterator<String> i = v.iterator();
    while (i.hasNext()) {
      String s = i.next();
      System.out.println(s);
      if (s.length() > 4) {
        i.remove();
      }
    }
    System.out.println("After Vector: " + v);
  }
}
