#include <stdio.h>

int main(){
  int i;
  i = 0;
  do{
    printf("Hello %d\n", i + 1);
  } while(!++i);
  return 0;
}
