#include <stdio.h>

int main(int argc, char *argv[]){
  int  x, y, z;
  scanf("%d%d%d", &x, &y, &z);
  if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
    printf("%s\n", "Yes");
  } else {
    printf("%s\n", "No");
  }
  return 0;
}
