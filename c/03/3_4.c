#include <stdio.h>

int main(int argc, char *argv[])
{
  int x;
  scanf("%d", &x);

  int f = 0;

  if (x < 0) {
    f = -1;
  } else if (x == 0) {
    f = 0;
  } else if (x > 5) {
    f = 2 * x;
  } else {
    f = 3 * x;
  }

  printf("f = %d\n", f);

  return 0;
}
