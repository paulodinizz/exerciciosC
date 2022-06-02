#include <stdio.h>

int main(void) {
  float num1;
  float num2;
  int op;
  printf("Digite 1 para somar os dois números!\nDigite 2 para calcular a diferença dos dois números!\nDigite 3 para calcular o produto entre os dois números!\nDigite 4 para calcular a divisão entre os dois números!\n");
  scanf("%d", &op);
  switch(op){
    case 1 :
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);
    printf("%f + %f = %f", num1, num2, num1+num2);
    break;
    case 2 :
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);
    if(num1 > num2){
      printf("%f - %f = %f", num1, num2, num1-num2);
    }else{
      printf("%f - %f = %f", num2, num1, num2-num1);
    }
    break;
    case 3 :
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);
    printf("%f * %f = %f", num1, num2, num1*num2);
    break;
    case 4 :
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);
    if(num1 > 0 && num2 > 0 && num1 > num2){
      printf("%.f / %.f = %.2f", num1, num2, num1/num2);
    }else if(num1 > 0 && num2 > 0 && num2 > num1){
      printf("%.f / %.f = %.2f", num2, num1, num2/num1);
    }else{
      printf("Não é possível fazer a divisão com um número de valor 0!");
    }
    break;
    default :
    printf("Opção selecionada é inválida! Digite apenas um número entre o 1 ao 4.");
  }
  return 0;
}