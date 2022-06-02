#include <stdio.h>

int main(void) {
  float venda;
  printf("Digite o valor da venda: ");
  scanf("%f", &venda);
  if(venda >= 100000){
    float comissao = 700 + (venda * 0.16);
    printf("Sua comissão é: %.2f", comissao);
  }else if(venda < 100000 && venda >= 80000){
    float comissao = 650 + (venda * 0.14);
    printf("Sua comissão é: %.2f", comissao);
  }else if(venda < 80000 && venda >= 60000){
    float comissao = 600 + (venda * 0.14);
    printf("Sua comissão é: %.2f", comissao);
  }else if(venda < 60000 && venda >= 40000){
    float comissao = 550 + (venda * 0.14);
    printf("Sua comissão é: %.2f", comissao);
  }else if(venda < 40000 && venda >= 20000){
    float comissao = 500 + (venda * 0.14);
    printf("Sua comissão é: %.2f", comissao);
  }else{
    float comissao = 400 + (venda * 0.14);
    printf("Sua comissão é: %.2f", comissao);
  }
  return 0;
}