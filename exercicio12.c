#include <stdio.h>
#include <math.h>

int main(void) {
  float num, logaritmo;
  printf("Digite um número:");
  scanf("%f", &num);

  if(num < 0 ){
    printf("Número inválido!");
  }else{
    logaritmo = log2(num);
    printf("log(%.1f) = %f", num, logaritmo);
  }
}