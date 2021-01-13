// T: 属性的访问控制

public class A extends B {
  public int d;

  public void tryVariables() {
    System.out.println(a);
    System.out.println(b); // 不允许访问
    System.out.println(getB());
    System.out.println(c);
  }
  
}
