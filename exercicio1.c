#include <stdio.h>


int main()
{
  int num1;
  int num2;
  printf("Digite um número:");
  scanf("%d", &num1);
  printf("Digite o segundo número:");
  scanf("%d", &num2);
  if(num1>num2){
    printf("O primeiro número é maior!");
  }
  if(num1<num2) {
    printf("O segundo número é maior!");
  }
  if(num1 == num2){
    printf("Digite outro número");
  }
  return 0;
}