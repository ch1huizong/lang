#include <iostream>

int main(int argc, char *argv[]) {
  int i, sum = 0;
  std::cin >> i;

  do {
    sum += i;
    i++;
  } while (i <= 10);
  std::cout << "sum = " << sum << std::endl;

  return 0;
}
