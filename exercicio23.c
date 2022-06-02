#include <stdio.h>

int main(void) {
  int ano;
  printf("Digite um ano: ");
  scanf("%d", &ano);

  if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0)) {
    printf("É um ano bissesto");
  }else{
    printf("Não é um ano bissesto");
  }
  return 0;
}