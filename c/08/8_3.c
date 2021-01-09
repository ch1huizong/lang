#include <stdio.h>

int search(int key, int a[], int length);

int main(int argc, char *argv[]) {
  int a[] = {2, 4, 6, 7, 1, 3, 5, 9, 11, 13, 23, 14, 32};
  int loc;
  int x;

  printf("请输入一个数字: ");
  scanf("%d", &x);
  loc = search(x, a, sizeof(a) / sizeof(a[0]));

  if (loc != -1) {
    printf("%d在第%d个位置上\n", x, loc);
  } else {
    printf("%d不存在\n", x);
  }

  return 0;
}

int search(int key, int a[], int length) {
  int ret = -1;
  for (int i = 0; i < length; ++i) {
    if (key == a[i]) {
      ret = i;
      break;
    }
  }
  return ret;
}
