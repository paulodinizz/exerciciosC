#include <stdio.h>

int main(void) {
  float valor;
  float imposto;
  char estado;
  printf("Digite o estado do destino:\n1 = Minas Gerais\n2 = São Paulo\n3 = Rio de Janeiro\n4 = Mato Grosso do Sul\n\n");
  scanf("%c", &estado);

  switch(estado){
    case '1':
    printf("Digite o valor: ");
    scanf("%f", &valor);
    imposto =  valor + (valor * 0.07);
    printf("O imposto sobre o seu valor é de: %.2f reais", imposto);
    break;
    case '2':
    printf("Digite o valor: ");
    scanf("%f", &valor);
    imposto = valor + (valor * 0.12);
    printf("O imposto sobre o seu valor é de: %.2f reais", imposto);
    break;
    case '3':
    printf("Digite o valor: ");
    scanf("%f", &valor);
    imposto =  valor + (valor * 0.15);
    printf("O imposto sobre o seu valor é de: %.2f reais", imposto);
    break;
    case '4':
    printf("Digite o valor: ");
    scanf("%f", &valor);
    imposto =  valor + (valor * 0.08);
    printf("O imposto sobre o seu valor é de: %.2f reais", imposto);
    break;
    default:
    printf("O número digitado não corresponde a nenhum estado. Digite outro número corretamente!");
  }
  return 0;
}