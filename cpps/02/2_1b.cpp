#include <iostream>

int main(int argc, char *argv[]) {
  const double pi(3.14159); //符号常量，必须开始就初始化
  int radius(0);            // 变量声明并初始化

  std::cout << "The initial value of radius is:" << radius << std::endl;

  std::cout << "Please enter the radius!\n" << std::endl;
  std::cin >> radius;
  std::cout << "The radius is:" << radius << '\n' << std::endl;
  std::cout << "PI is:" << pi << '\n' << std::endl;

  std::cout << "Please enter a different radius!\n" << std::endl;
  std::cin >> radius;
  std::cout << "Now the radius is changed to:" << radius << '\n' << std::endl;
  std::cout << "PI is still:" << pi << '\n' << std::endl;

  std::cout << sizeof(short) << std::endl;

  // std::cin >> pi; //不能改变

  return 0;
}
