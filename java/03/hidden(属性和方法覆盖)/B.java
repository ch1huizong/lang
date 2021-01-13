public class B {
  public int a = 10;
  private int b = 20; // 不能被子类访问
  protected int c = 30;

  public int getB() {
    return b;
  }
}
