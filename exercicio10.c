#include <stdio.h>

int main(void) {
  float altura;
  int sexo;
  printf("Digite sua altura em metros:");
  scanf("%f", &altura);
  printf("Digite 1 para masculino e digite 2 para feminino");
  scanf("%d", &sexo);

  if(sexo == 1){
    float h = altura;
    float pesoIdeal = (72.7 * h) - 58;
    printf("Seu peso ideal é: %.2f", pesoIdeal);
  }
  else if(sexo != 1 && sexo != 2){
    printf("Digite somente um dos números que foram pedidos!");
  }
  else{
    float h = altura;
    float pesoIdealFem = (62.1 * h) - 44.7;
    printf("O seu peso ideal é: %.2f", pesoIdealFem);
  }
  return 0;
}