#include <stdio.h>

int main(void) {
  float salAtual;
  int tempTrab;
  float salNovo;
  printf("Digite o seu Salário atual: ");
  scanf("%f", &salAtual);
  printf("Digite o seu tempo trabalhado: ");
  scanf("%d", &tempTrab);
  if(salAtual <= 500 && tempTrab < 1){
    salNovo = salAtual + (salAtual * 0.25);
    printf("Seu salário com o valor do reajuste é: %.2f", salNovo);
  }else if(salAtual <=1000 && (tempTrab >=1 && tempTrab <= 3)){
    salNovo = salAtual + (salAtual * 0.2) + 100;
    printf("Seu salário com o valor do reajuste e do bônus é: %.2f", salNovo);
  }else if(salAtual <=1500 && (tempTrab >= 4 && tempTrab <= 6)){
    salNovo = salAtual + (salAtual * 0.15) + 100;
    printf("Seu salário com o valor do reajuste e do bônus é: %.2f", salNovo);
  }else if(salAtual <= 2000 && (tempTrab >= 7 && tempTrab <=10)){
    salNovo = salAtual + (salAtual * 0.1) + 100;
    printf("Seu salário com o valor do reajuste e do bônus é: %.2f", salNovo);
  }else{
    salNovo = salAtual + 500;
    printf("Seu salário com o valor do bônus é: %.2f", salNovo);
  }
  return 0;
}