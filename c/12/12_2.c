#include <stdio.h>
// T: 宏定义参考

#define PI 3.14159  // 完全文本替换,空格也会被替换, 定义语句后没有分号
#define PI2 2 * PI
#define FORMAT "%f\n"

#define DEBGU  // 无值的宏

#define PRT           \
  printf("%f\n", PI); \
  printf("%f\n", PI2) // ! 最好不要有分号

#define cube(x) ((x) * (x) * (x))  // 带参数的宏

#define RADTODEG1(x) (x * 57.29578)
#define RADTODEG2(x) (x) * 57.29578
#define RADTODEG(x) ((x) * 57.29578) // 一切有括号，参数和返回值都要有


int main(int argc, char* argv[]) {
  printf("%f\n", 2 * PI);

  PRT;

  printf("%s %d\n", __FILE__, __LINE__);  // 预定义宏
  printf("%s, %s\n", __DATE__, __TIME__);

  printf("%d\n", cube(5));

  // 出现问题
  printf(FORMAT, RADTODEG1(5 + 2));
  printf(FORMAT, 180.0 / RADTODEG2(1));

  return 0;
}
