#include <iostream>
// T: (难点)矩阵转置, 利用二级指针

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int **a;          // 二级指针, 有没有其他方式？
  a = new int *[3]; // 唯一要求，a指向的block块内容是指针
  for (int i = 0; i < 3; i++)
    a[i] = new int[3]; // a里的每个元素指向int数组首地址

  std::cout << "输入9个整数作为矩阵元素值: " << std::endl;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      std::cin >> a[i][j];

  std::cout << "初始矩阵: " << std::endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      std::cout << a[i][j] << ' ';
    std::cout << std::endl;
  }

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < i; j++)
      swap(a[i][j], a[j][i]);

  std::cout << "转置后矩阵: " << std::endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      std::cout << a[i][j] << ' ';
    std::cout << std::endl;
  }
  return 0;
}
