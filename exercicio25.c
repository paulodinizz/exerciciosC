#include <stdio.h>
#include <math.h>

int main(void) {
  float a;
  float b;
  float c;
  float delta;
  float raizDelta;
  float raizMais;
  float raizMenos;
  printf("Digite o valor de a: ");
  scanf("%f", &a);
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  printf("Digite o valor de c: ");
  scanf("%f", &c);

  if(a == 0){
    printf("Não é uma equação de segundo grau");
  }else{
    delta = (pow(b,2)) - (4*a*c);
    raizDelta = sqrt(delta);
    if(delta<0){
      printf("Não existe raiz");
    }else if(delta == 0){
      raizMais = (-b + raizDelta) / (2*a);
      printf("(-%f + sqrt(%f)) / (2*%f) = %f", b, delta, a, raizMais);
      printf("Raiz única!");
    }else{
      raizMais = (-(b) + raizDelta) / (2*a);
      raizMenos = (-(b) - raizDelta) / (2*a);
      printf("(-(%f) + sqrt(%f)) / (2*%f) = %f\n", b, delta, a, raizMais);
      printf("(-(%f) - sqrt(%f)) / (2*%f) = %f", b, delta, a, raizMenos);
    }
  }
  return 0;
}