#include <stdio.h>  // scanfとprintfを使うおまじない

int main(int argc, char *argv[]){
  char s[1024];
  int i = 0;

  scanf("%s", s);

  while(s[i] != '\0') {
    if (s[i] - ((i+1) % 26) < 0x41){
      s[i] = s[i] - ((i+1) % 26) + 26;
    } else {
      s[i] = s[i] - ((i+1) % 26);
    };
    // printf("%c\n", s[i] - (i+1));
    i++;
  }
  printf("%s\n", s);

  return 0;
}
