#include <iostream>

int common(int n, int k) {
  if (n < k) {
    return 0;
  } else if (n == k || k == 0) {
    return 1;
  } else {
    return common(n - 1, k) + common(n - 1, k - 1); // 公式是怎么推导的了？
  }
}

int main(int argc, char *argv[]) {
  int n, k;
  std::cout << "Please enter two integers n and k: ";
  std::cin >> n >> k;
  std::cout << "C(n, k)" << common(n, k) << std::endl;
  return 0;
}
