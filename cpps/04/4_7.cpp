#include <iomanip>
#include <iostream>
#include <string>
// T: 结构体

struct Student {
  int num;
  std::string name;
  char sex;
  int age;
};

int main(int argc, char *argv[]) {
  Student stu = {97001, "Lin Lin", 'F', 19};
  std::cout << "Num: " << stu.num << std::endl;
  std::cout << "Name: " << stu.name << std::endl;
  std::cout << "Sex: " << stu.sex << std::endl;
  std::cout << "Age: " << stu.age << std::endl;

  return 0;
}
