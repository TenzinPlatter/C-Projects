#include <stdio.h>
#include "calculator.h"

float calculate(char operation[3]){
  // takes in a 3 char string in form NON, where N is number and O is operand, returns calculated operation
  int num1 = operation[0] - '0';
  int num2 = operation[2] - '0';
  char operand = operation[1];
  char newOperation[3] = {num1, operand, num2};
  switch(operand){
    case '+':
      return num1 + num2;
      break;
    case '-':
      return num1 - num2;
      break;
    case '*':
      return num1 * num2;
      break;
    case '/':
      return num1 / num2;
      break;
  default:
    printf("That is not a valid operation, returning 0\n");
    return 0;
  }
}

int main(){
  int continue;
  do{
    float answer;
    char operation[3];
    printf("Enter your operation in format <number> <operation> <number>\n");
    scanf("%c %c %c", &operation[0] , &operation[1], &operation[2]);
    answer = calculate(operation);
    printf("The answer to %s is: %g\n", operation, answer); 
    printf("Do you want to do another calculation? [1/0]\n");
    scanf("%d", &continue, 1);
  } while(continue);
  return 0;
}
