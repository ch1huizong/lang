#include <iostream>

int sumOfSquare(int a, int b) { return a * a + b * b; }

double sumOfSquare(double a, double b) { return a * a + b * b; }

int main(int argc, char *argv[]) {
  int m, n;
  std::cout << "Enter two integer: ";
  std::cin >> m >> n;
  std::cout << "Their sum of square: " << sumOfSquare(m, n) << std::endl;

  double x, y;
  std::cout << "Enter two real number: ";
  std::cin >> x >> y;
  std::cout << "Their sum of square: " << sumOfSquare(x, y) << std::endl;

  return 0;
}
