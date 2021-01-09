#include <stdio.h>
// T: 宏定义

#define PI 3.14
#define PI2  2 * PI
#define PRT printf("%f\n", PI); \
  printf("%f\n", PI2); 

#define cube(x) ((x) * (x) * (x))



int main(int argc, char *argv[])
{
  PRT;
  printf("%s %d\n", __FILE__, __LINE__); // 预定义宏
  printf("%s, %s\n", __DATE__, __TIME__);
  printf("%d\n", cube(3));
  return 0;
}
