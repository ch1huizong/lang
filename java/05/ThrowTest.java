// T: 自己抛出异常

public class ThrowTest {
  public static void main(String[] args) {
    try {
      throw new ArithmeticException();
    } catch (Exception e) {
      System.out.println(e);
      e.printStackTrace();
    }

    try {
      throw new ArrayIndexOutOfBoundsException();
    } catch (Exception e) {
      System.out.println(e);
      e.printStackTrace();
    }

    try {
      throw new StringIndexOutOfBoundsException();
    } catch (Exception e) {
      System.out.println(e);
      e.printStackTrace();
    }
  }
}
