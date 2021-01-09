#include <iostream>
// T: 指针数组应用

int main(int argc, char *argv[]) {
  int line1[] = {1, 0, 0};
  int line2[] = {0, 1, 0};
  int line3[] = {0, 0, 1};

  int *p[3] = {line1, line2, line3};

  std::cout << "Matrix test: " << std::endl;
  for (int i = 0; i < 3; i++) {
    // std::cout << sizeof(p) << std::endl;
    for (int j = 0; j < 3; j++) {
      std::cout << p[i][j] << " "; // 实际与数组的取数方式不同
    }
    std::cout << std::endl;
  }

  return 0;
}
