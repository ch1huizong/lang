#include <iomanip>
#include <iostream>

int getVolume(int length, int width = 2, int height = 3);

int main(int argc, char *argv[]) {
  const int X = 10, Y = 12, Z = 15;
  std::cout << "Some box data is ";
  std::cout << getVolume(X, Y, Z) << std::endl;
  std::cout << "Some box data is ";
  std::cout << getVolume(X, Y) << std::endl;
  std::cout << "Some box data is ";
  std::cout << getVolume(X) << std::endl;
  return 0;
}

int getVolume(int length, int width, int height) {
  std::cout << std::setw(5) << length << std::setw(5) << width << std::setw(5)
            << height << "\t";
  return length * width * height;
}
