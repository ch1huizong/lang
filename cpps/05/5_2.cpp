#include <iostream>
// T: 探索静态局部变量

int i = 1;

void other() {
  static int a = 2;  // 具有静态作用域
  static int b;
  int c = 10;

  a += 2;
  i += 32;
  c += 5;
  std::cout << "---Other---" << std::endl;
  std::cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c
            << std::endl;
  b = a;
}

int main(int argc, char* argv[]) {
  static int a;
  int b = -10;
  int c = 0;

  std::cout << "--MAIN--" << std::endl;
  std::cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c
            << std::endl;

  c += 8;
  other();
  std::cout << "--MAIN--" << std::endl;
  std::cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c
            << std::endl;

  i += 10;
  other();

  return 0;
}
