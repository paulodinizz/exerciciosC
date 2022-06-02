#include <stdio.h>
#include <math.h>

int main(void) {
  float altura;
  float peso;
  printf("Digite a sua altura(em metros): ");
  scanf("%f", &altura);
  printf("Digite o seu peso: ");
  scanf("%f", &peso);
  float imc = peso / (altura * altura);
  if(imc < 18.5){
    printf("Abaixo do peso!");
  }else if(imc >= 18.6 && imc <= 24.9){
    printf("Saudável");
  }else if(imc >= 25.0 && imc <= 29.9){
    printf("Peso em excesso");
  }else if(imc >= 30.0 && imc <= 34.9){
    printf("Obesidade Grau |");
  }else if(imc >= 35.0 && imc <= 39.9){
    printf("Obesidade Grau ||(Severa");
  }else{
    printf("Obesidade Grau |||(Mórbida");
  }
  return 0;
}