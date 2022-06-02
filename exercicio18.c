#include <stdio.h>
int main(void) {
  float num1;
  float num2;
  char operadores;
  printf("Digite um operador matemático: +, -, *, / ");
  scanf("%c", &operadores);
  printf("Digite um número:");
  scanf("%f", &num1);
  printf("Digite outro número:");
  scanf("%f", &num2);
  
  switch(operadores)
  {
    case '+' :
    printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
    break;
    case '-':
    printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);
    break;
    case '/':
    printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
    break;
    case '*':
    printf("%.2f, %.2f = %.2f", num1, num2, num1*num2);
    break;
  }
  return 0;
}