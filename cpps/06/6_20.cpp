#include <iostream>
#include <vector>
// T: Vector数组的使用1

double average(const std::vector<double> &arr); // 引用方式定义

int main(int argc, char *argv[]) {
  unsigned n;
  std::cout << "n = ";
  std::cin >> n;

  std::vector<double> arr(n);
  std::cout << "Please input " << n << " real numbers: " << std::endl;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::cout << "Average = " << average(arr) << std::endl;
  return 0;
}

double average(const std::vector<double> &arr) {
  double sum = 0;
  for (int i = 0; i < arr.size(); ++i) {
    sum += arr[i];
  }
  return sum / arr.size();
}
