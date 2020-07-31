#include <stdio.h>

int main(int argc, char *argv[]){
  int n;
  char s[1024];
  char t[1024];
  int cnt = 0;

  scanf("%d%s%s", &n, s, t);

  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) {
      cnt ++;
    }
  }
  printf("%d\n", cnt);

  return 0;
}
