#include <iostream>

class Point {
public:
  Point(int x = 0, int y = 0) : x(x), y(y) { count++; };
  virtual ~Point() { count -= 1; };
  Point(Point &p) {
    x = p.x;
    y = p.y;
    count++;
  };

  int getX() { return x; };
  int getY() { return y; };

  void showCount() { std::cout << "Object count = " << count << std::endl; }

private:
  int x, y;
  static int count;
};

int Point::count = 0;

int main(int argc, char *argv[]) {
  Point a(4, 5);
  std::cout << "Point A: " << a.getX() << "," << a.getY() << std::endl;
  a.showCount();

  Point b(a);
  std::cout << "Point B: " << b.getX() << "," << b.getY() << std::endl;
  b.showCount();

  return 0;
}
