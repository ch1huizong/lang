#include <iostream>

float Convert(float F) {
  float C;
  C = (F - 32) * 5 / 9;

  return C;
}

int main(int argc, char *argv[]) {
  float F;

  std::cout << "please input the temperature in fahrenheit:\n";
  std::cin >> F;
  std::cout << "Convert the temperature in celsius:\n";
  std::cout << Convert(F) << std::endl;
  return 0;
}
