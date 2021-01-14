public class B1 extends A1 {
  int x = 100;

  public void printb() {
    super.x = super.x + 10;
    System.out.println("super.x = " + super.x + " x = " + x);
  }
  
  public static void main(String[] args) {
    A1 a1 = new A1();
    a1.setx(4);
    a1.printa();

    B1 b1 = new B1();
    b1.printb();
    b1.printa();
    System.out.println();

    b1.setx(6);
    b1.printb();
    b1.printa();
    a1.printa();
    
  }
}
