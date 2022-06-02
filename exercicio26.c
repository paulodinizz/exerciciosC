#include <stdio.h>

int main(void) {
  int km;
  int litro;
  printf("Digite a distância em quilômetros: ");
  scanf("%d", &km);
  printf("Digite a quantidade de litros consumido durante o percurso: ");
  scanf("%d", &litro);

  float consumo = km / litro;

  if(consumo < 8){
    printf("Venda o carro!");
  }else if(consumo >= 8 && consumo <=14){
    printf("Econômico!");
  }else if(consumo > 12){
    printf("Super econômico!");
  }
  return 0;
}