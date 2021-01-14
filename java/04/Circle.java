// T: 实现接口的-圆

public class Circle implements Shape2D {

	private double r;
  private String color;

  public Circle(double r) {
		this.r = r;
  }

  public double area() {
    return (pi * r * r);
  }

  public void setColor(String str) {
    this.color = str;
    System.out.println("color = " + this.color);
  }

  public static void main(String[] args) {
    Circle c = new Circle(2.0);
    c.setColor("blue");
    System.out.println("Area = " + c.area());
  }
}
