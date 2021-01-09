#include <iostream>

bool symm(unsigned n) {
  unsigned i = n; // 当下参与计算值
  unsigned m = 0; // 前一次累计值
  while (i > 0) {
    m = m * 10 + i % 10;
    i /= 10;
  }
  return m == n;
}

int main(int argc, char *argv[]) {
  for (unsigned int i = 11; i < 1000; ++i) {
    if (symm(i) && symm(i * i) && symm(i * i * i)) {
      std::cout << "i = " << i;
      std::cout << " i * i = " << i * i;
      std::cout << " i * i * i = " << i * i * i << std::endl;
    }
  }
  return 0;
}
