#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
  printf("\a");
  sleep(2);
  printf("\a");
  exit(0);
}
