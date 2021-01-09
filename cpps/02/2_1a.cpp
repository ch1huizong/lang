#include <iostream>

int main(int argc, char *argv[]) {
  int radius;
  std::cout << "Please enter the radius!\n" << std::endl;
  std::cin >> radius;
  std::cout << "The radius is:" << radius << '\n' << std::endl;
  std::cout << "PI is:" << 3.14 << '\n' << std::endl;

  std::cout << "Please enter a different radius!\n" << std::endl;
  std::cin >> radius;
  std::cout << "Now the radius is changed to:" << radius << '\n' << std::endl;
  return 0;
}
