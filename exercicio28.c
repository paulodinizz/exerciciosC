#include <stdio.h>
#include <math.h>



int main(void) {
  char calc;
  float num1, num2, num3;
  printf("Digite 1 para calcular a média Geométrica.\nDigite 2 para calcular a média ponderada\nDigite 3 para calcular a média harmônica\nDigite 4 para calcular a média aritmética\n");
  scanf("%c", &calc);

  switch(calc){
    case '1':
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    int multGeo = num1 * num2 * num3;
    float geometrica = cbrt(multGeo);
    printf("O resultado da sua média geométrica é: %f", geometrica);
    break;
    case '2':
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    float pond = num1 + (2*num2) + (3*num3);
    float multPond = pond / 6;
    printf("O resultado da sua média ponderada é: %f", multPond);
    break;
    case '3':
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    float divHarm = 1 / (1/num1 + 1/num2 + 1/num3);
    printf("O resultado da sua média harmônica é: %f", divHarm);
    break;
    case '4':
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    float aritmetica = (num1 + num2 + num3) / 3;
    printf("O resultado da sua média aritmética é: %f", aritmetica);
    break;
    default:
    printf("O número digitado não corresponde a nenhuma opção!");
  }
  return 0;
}