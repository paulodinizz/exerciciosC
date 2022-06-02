#include <stdio.h>


int main(void) {
  int num;
  printf("Digite um número:");
  scanf("%d", &num);
  if(num % 2 == 0){
    printf("O número que você digitou é par!");
  }else{
    printf("O número que você digitou é impar!");
  }
  return 0;
}