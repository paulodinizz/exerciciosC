#include <stdio.h>

int main(void) {
  int lanche;
  int quantidade;
  printf("Digite o código respectivo com o alimento que você deseja!\nCachorro quente = 100, valor unitário = 1.20\nBauru Simples = 101, valor unitário = 1.30\nBauru com ovo = 102. valor unitário = 1.50\nHamburguer = 103, valor unitário = 1.20\nCheeseburguer = 104, valor unitário = 1.70\nSuco = 105, valor unitário = 2.20\nRefrigerante = 106, valor unitário = 1.00\n\n");
  scanf("%d", &lanche);
  switch(lanche){
    case 100:
    printf("Quantos cachorro quente você deseja?\n");
    scanf("%d", &quantidade);
    float valorTotal = quantidade * 1.20;
    printf("O valor total da sua compra é: %.2f", valorTotal);
    break;
    case 101:
    printf("Quantos Bauru Simples você deseja?\n");
    scanf("%d", &quantidade);
    valorTotal = quantidade * 1.30;
    printf("O valor total da sua compra é: %.2f", valorTotal);
    break;
    case 102:
    printf("Quantos Bauru com Ovo você deseja?\n");
    scanf("%d", &quantidade);
    valorTotal = quantidade * 1.50;
    printf("O valor total da sua compra é: %.2f", valorTotal);
    break;
    case 103:
    printf("Quantos hamburguer você deseja?\n");
    scanf("%d", &quantidade);
    valorTotal = quantidade * 1.20;
    printf("O valor total da sua compra é: %.2f", valorTotal);
    break;
    case 104:
    printf("Quantos Cheeseburguer você deseja?\n");
    scanf("%d", &quantidade);
    valorTotal = quantidade * 1.70;
    printf("O valor total da sua compra é: %.2f", valorTotal);
    break;
    case 105:
    printf("Quantos Suco você deseja?\n");
    scanf("%d", &quantidade);
    valorTotal = quantidade * 2.20;
    printf("O valor total da sua compra é: %.2f", valorTotal);
    break;
    case 106:
    printf("Quantos Refrigerantes você deseja?\n");
    scanf("%d", &quantidade);
    valorTotal = quantidade * 1.00;
    printf("O valor total da sua compra é: %f", valorTotal);
    break;
    default:
    printf("O código digitado não corresponde a nenhum produto!");
  }
  return 0;
}