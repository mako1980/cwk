#include <stdio.h>

int main(int argc, char *argv[]){
  int n;
  scanf("%d", &n);
  int i;
  int H, M, h, m;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d:%d %d:%d", &H, &M, &h, &m);
    M += 60 * H;
    m += 60 * h;
    if (M > m) {
      m += 24 * 60;
    }
    sum += m - M;
  }
  printf("%d\n", sum);
  return 0;
}
