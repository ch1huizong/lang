#include <iostream>

int main(int argc, char *argv[]) {
  int i = 1, sum = 0;

  while (i <= 1000) {
    sum += i;
    i++;
  }
  std::cout << "sum = " << sum << std::endl;

  return 0;
}
