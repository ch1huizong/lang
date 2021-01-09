public class Circle {
  static double PI = 3.14159265;
  int radius;

  public double circumference() {
    return 2 * PI * radius;
  }

  public void enlarge(int factor) {
    radius = radius * factor;
  }

  public boolean fitsInside(Rectangle r) {
    return (2 *  radius < r.width) && (2 * radius < r.height);
  }
}
