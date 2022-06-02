#include <stdio.h>

int main(void) {
  float basemenor;
  float basemaior;
  float altura;
  printf("Digite o tamanho da base menor");
  scanf("%f", &basemenor);
  printf("Digite o tamanho da base maior");
  scanf("%f", &basemaior);
  printf("Digite o tamanho da altura");
  scanf("%f", &altura);

  float area = ((basemaior + basemenor) * altura) /2;

  if(basemaior > 0 && basemenor > 0){
    printf("A área total do trapézio é:%.2f", area);
  }
  return 0;
}