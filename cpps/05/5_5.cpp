#include <iostream>
// T: 类的静态函数成员 - Point

class Point {
 public:
  Point(int x = 0, int y = 0) : x(x), y(y) { count++; };
  ~Point() { count -= 1; };
  Point(Point& p) {
    x = p.x;
    y = p.y;
    count++;
  };

  int getX() { return x; };
  int getY() { return y; };

  static void showCount() {  // 静态函数成员
    std::cout << "Object count = " << count << std::endl;
  }

 private:
  int x, y;
  static int count;
};

int Point::count = 0;

int main(int argc, char* argv[]) {
  Point::showCount(); // 调用静态函数成员

  Point a(4, 5);
  std::cout << "Point A: " << a.getX() << "," << a.getY() << std::endl;
  Point::showCount();

  Point b(a);
  std::cout << "Point B: " << b.getX() << "," << b.getY() << std::endl;
  Point::showCount();

  // 对象调用静态函数成员
  a.showCount();
  b.showCount();

  return 0;
}
