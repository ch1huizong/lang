// T: 属性隐藏和方法调用

public class Test1 {
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
