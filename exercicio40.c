#include <stdio.h>

int main(void) {
  float custoFab;
  printf("Digite o custo de fábrica do carro: ");
  scanf("%f", &custoFab);
  if(custoFab <= 12000){
    float custoTotal = custoFab * 0.05;
    printf("O custo total do seu carro é de: %.2f", custoTotal);
  }else if(custoFab > 12000 && custoFab <= 25000){
    float custoTotal = custoFab + (custoFab * (0.1 + 0.15));
    printf("O custo total do seu carro é de: %.2f", custoTotal);
  }else{
    float custoTotal = custoFab + (custoFab * (0.15 + 0.20));
    printf("O custo total do seu carro é de: %.2f", custoTotal);
  }
  return 0;
}