#include <iostream>
// T: 常数据成员

class A {
public:
  A(int i);
  void print();

private:
  const int a;
  static const int b;
};

const int A::b = 10; // 类成员
A::A(int i) : a(i){};
void A::print() { std::cout << a << ":" << b << std::endl; }

int main(int argc, char *argv[]) {
  A a1(100), a2(0);
  a1.print();
  a2.print();

  return 0;
}
