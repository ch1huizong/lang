#include "employee.h"
#include <iostream>

// T: 对象数组使用（第二种方法)
int main(int argc, char *argv[]) {
  Employee emp[5], *e = nullptr;

  e = new Employee("Che", "Chaoyang", "Beijing", "01010");
  emp[0] = *e;
  delete e;

  e = new Employee("Wang", "Chaoyang", "Beijing", "01010");
  emp[1] = *e;
  delete e;

  e = new Employee("Zhang", "Baidian", "Beijing", "01010");
  emp[2] = *e;
  delete e;

  for (int i = 0; i < 3; ++i) {
    emp[i].display();
  }

  return 0;
}
