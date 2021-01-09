#include <iostream>
// T: 动态创建多维数组

int main(int argc, char *argv[]) {
  int(*cp)[9][8] = new int[7][9][8]; // cp的指向的内容块是数组
  for (int i = 0; i < 7; ++i) {
    for (int j = 0; j < 9; ++j) {
      for (int k = 0; k < 8; ++k) {
        *(*(*(cp + i) + j) + k) = (i * 100 + j * 10 + k); // 层层寻址
      }
    }
  }

  for (int i = 0; i < 7; ++i) {
    for (int j = 0; j < 9; ++j) {
      for (int k = 0; k < 8; ++k) {
        std::cout << cp[i][j][k] << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }

  delete[] cp;
  return 0;
}
