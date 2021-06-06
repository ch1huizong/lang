#ifndef _MAX_H // 标准头文件结构, 使这个.h文件在一个编译单元中只能引用一次，根源上是解决结构重复定义的问题

#define _MAX_H 

extern int gAll; // 全局变量声明, 声明不产生代码
double max(double a, double b);

struct Node {
  int value;
  char* name;
};

#endif /* ifndef _MAX_H */

