#include <iostream>
// T: 第二种方法，移动构造(没有效果)

class IntNum {
public:
  IntNum(int x = 0) : xptr(new int(x)) {
    std::cout << "Calling constructor..." << std::endl;
  }
  IntNum(const IntNum &n) : xptr(new int(*n.xptr)) {
    std::cout << "Calling copy constructor..." << std::endl;
  }

  IntNum(IntNum &&n) : xptr(n.xptr) { // 移动构造函数
    n.xptr = nullptr; // here
    std::cout << "Calling move constructor..." << std::endl;
  }
  ~IntNum() {
    delete xptr;
    std::cout << "Destructing..." << std::endl;
  }
  int getInt() { return *xptr; }

private:
  int *xptr;
};

IntNum getNum() {
  IntNum a;
  return a;
}

int main(int argc, char *argv[]) {
  std::cout << getNum().getInt() << std::endl;
  return 0;
}
