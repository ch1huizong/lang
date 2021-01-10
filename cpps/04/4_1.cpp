#include <iostream>
// T: 类的定义, 钟表类

class Clock {
public:
  Clock(int newH, int newM, int newS); // 构造函数
  Clock();                             //默认构造函数
  // Clock() = default; // 指示编译器生成构造函数

  void setTime(int newH = 0, int newM = 0, int newS = 0);
  void showTime();

private:
  int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS)
    : hour(newH), minute(newM), second(newS){}; // 初始化参数列表
// Clock::Clock():hour(0),minute(0), second(0) {};
Clock::Clock() : Clock(6, 6, 6){}; // 委托构造函数

void Clock::setTime(int newH, int newM, int newS) {
  hour = newH;
  minute = newM;
  second = newS;
}

void Clock::showTime() {
  std::cout << hour << ":" << minute << ":" << second << std::endl;
}

int main(int argc, char *argv[]) {
  Clock c1(9, 45, 0);
  Clock c2;
  c1.showTime();
  c2.showTime();

  return 0;
}
