#include <stdio.h>

int main(void) {
  float a;
  float b;
  float c;
  // equilátero = 3 lados iguais
  // isósceles = 2 lados iguais
  // escaleno = 3 lados diferentes
  printf("Digite um número pro primeiro lado de um triângulo:");
  scanf("%f", &a);
  printf("Digite um número para o segundo lado de um triângulo:");
  scanf("%f", &b);
  printf("Digite um número para o terceiro lado de um triângulo:");
  scanf("%f", &c);
  if(a < b+c && b < c+a && c < a+b && a==b && a==c && c==b){
    printf("É um triângulo equilátero");
  }else if(a < b+c && b < c+a && c < a+b && (a==b || a==c || c==b) && (a!=c || a!=b || c!=b)){
    printf("É um triângulo isósceles");
  }
  else if(a < b+c && b < c+a && c < a+b && a!=b && a!=c && b!=c){
    printf("É um triângulo escaleno");
  }
  else{
    printf("Os números digitados não corresponde a um triângulo!");
  }
  return 0;
}