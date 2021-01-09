#include <iostream>

int i;
int main(int argc, char *argv[]) {
  i = 5;
  {
    int i;
    i = 7;
    std::cout << "i = " << i << std::endl;
  }
  std::cout << "i = " << i << std::endl;
  return 0;
}
