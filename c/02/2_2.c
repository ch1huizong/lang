#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("请分别输入身高的英尺和英寸,"
         "如输入\"5 7\"表示5英尺7英寸: ");

  double foot, inch;
  scanf("%lf %lf", &foot, &inch);

  printf("身高是%f米。\n", (foot + inch / 12) * 0.3048);

  return 0;
}
