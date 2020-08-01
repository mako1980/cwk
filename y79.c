#include <stdio.h>

int main(int argc, char *argv[]){
  int n, l;
  int lv[6] = {0, 0, 0, 0, 0, 0};

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &l);
    lv[l-1]++;
  }
  int a = 1;
  for (int i = 1; i < 6; i++) {
    if (lv[a - 1] <= lv[i]) {
      a = i + 1;
    }
  }
  printf("%d\n", a);
  return 0;
}
