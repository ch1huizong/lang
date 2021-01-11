// T: 图形类-圆
// import static java.lang.Math.PI;

public class Circle {
  static double PI = 3.14159265; // 类变量
  private int radius;

  public double circumference() {
    return 2 * PI * radius;
  }

  public void enlarge(int factor) {
    radius = radius * factor;
  }

  public boolean fitsInside(Rectangle r) {
    return (2 * radius < r.width) && (2 * radius < r.height);
  }

  public int getRadius() {
    return this.radius;
  }

  public void setRadius(int radius) {
    this.radius = radius;
  }
}
