#include <iostream>

enum class Side { Right, Left };

enum class Thing { Wrong, Right };

int main(int argc, char *argv[]) {
  Side s = Side::Right;
  Thing w = Thing::Wrong;
  std::cout << (s == w) << std::endl; // 编译错误，无法直接比较不同枚举类

  return 0;
}
