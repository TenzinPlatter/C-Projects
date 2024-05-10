#include <stdio.h>

void firstFunc(){
  printf("Hello from function\n");
}

int secondFunc(int a, int b){
  int sum = a + b;
  return sum;
}


int main(){
  int a;
  int * pa;
  printf("Hello World!\n");
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("Doubling your number gives: %d\n", a);
  for (int i = 0; i < 5; i++){
    printf("%d\n", i + 1);
  }
  firstFunc();
  int b = 5, c = 2;
  int sum = secondFunc(b, c);
  printf("The sum of %d and %d is %d\n", b, c, sum);

  char letters[5];
  int numbers[] = {1, 2, 3};

  return 0;
}

