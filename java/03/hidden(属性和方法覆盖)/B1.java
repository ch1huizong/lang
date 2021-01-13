public class B1 extends A1 {
  int x = 100;

  public void printb() {
    super.x = super.x + 10;
    System.out.println("super.x = " + super.x + " x = " + x);
  }
}
