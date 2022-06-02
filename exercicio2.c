#include <stdio.h>
#include <math.h>


int main(void) {
  int num;
  printf("Digite um número:");
  scanf("%d", &num);
  if (num > 0){
    float raiz = sqrt(num);
    printf("A raiz quadrada de %d é:%.2f", num, raiz);
  }else{
    printf("O número é inválido!");
  }
}