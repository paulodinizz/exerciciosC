#include <stdio.h>

int main(void) {
  float sal;
  float prest;

  printf("Digite o seu salário:");
  scanf("%f", &sal);
  printf("Digite o valor da prestação:");
  scanf("%f", &prest);

  int prestTotal = 0.2 * sal;

  if(prest < prestTotal){
    printf("Empréstimo concedido");
  }else{
    printf("Empréstimo não concedido");
  }
}