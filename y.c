#include <stdio.h>  // scanfとprintfを使うおまじない

int main(int argc, char *argv[]){
    int a, b;
    char s[11];

    // 標準入力から読み込む(空白や改行で勝手に区切ってくれる)
    // 逆に空白込みの文字列を読み込む場合は別の方法で読む必要がある。
    scanf("%d%d%s", &a, &b, s);

    // 標準出力に出力
    printf("%d %s\n", a + b, s);

    return 0;
}
