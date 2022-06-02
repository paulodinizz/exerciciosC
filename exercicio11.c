#include <stdio.h>

int main(void) {
  int numero, resto, somatorio;
  printf("Digite um número para obter seu somatório:");
  scanf("%d", &numero);
  somatorio = 0;
  while (numero>0){
    resto=numero % 10;
    numero = numero/10;
    somatorio = somatorio+resto;
  }
  printf("O somatorio é %d\n", somatorio);
}