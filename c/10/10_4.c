#include <stdio.h>
#include <string.h>
// T: 比较

int mycmp1(const char *s1, char *s2) {
  int idx = 0;
  while (s1[idx] == s2[idx] && s1[idx] != '\0') {
    idx++;
  }
  return s1[idx] - s2[idx];
}

int mycmp2(const char *s1, char *s2) {
  while ((*s1 == *s2)) {
    s1++;
    s2++;
  }

  return *s1 - *s2;
}

int main(int argc, char *argv[]) {
  char s1[] = "abc";
  char s2[] = "hello";
  printf("strcmp: %d\n", strcmp(s1, s2));
  printf("mycmp1: %d\n", mycmp1(s1, s2));
  printf("mycmp2: %d\n", mycmp2(s1, s2));

  return 0;
}
