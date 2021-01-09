#include <stdio.h>
// T: 结构的构造和初始化

struct date {
  int year;
  int month;
  int day;
};

int main(int argc, char *argv[]) {
  // 初始化
  struct date today = {2020, 12, 29};
  struct date thismonth = {.month = 12, .year = 2020};

  struct date t1;
  struct date t2;
  t1 = (struct date){2020, 12, 29}; // 类型
  t2 = t1;

  printf("Today's date is %i-%i-%i.\n", today.year, today.month, today.day);
  printf("This month's date is %i-%i-%i.\n", thismonth.year, thismonth.month,
         thismonth.day);

  printf("t1 is %i-%i-%i.\n", t1.year, t1.month, t1.day);
  printf("t2 is %i-%i-%i.\n", t2.year, t2.month, t2.day);

  return 0;
}
