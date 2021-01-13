// T: 类的组合

public class Line {

  private Point p1;
  private Point p2;

  public Line(Point a, Point b) {
    this.p1 = new Point(a.getX(), a.getY());
    this.p2 = new Point(b.getX(), b.getY());
  }

  public double Length() {
    return Math.sqrt(Math.pow(p2.getX() - p1.getX(), 2) + Math.pow(p2.getY() - p1.getY(), 2));
  }
}
