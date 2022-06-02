#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main(void) {
  int i, acertos = 0;
  float a,b,soma,resp;

  srand(time(NULL));
  for(i=0; i<5; i++){
    a= (rand() % 100) +1;
    b= (rand() % 100) +1;
    soma = a+b;
    resp = soma;
    printf("Qual é a soma de %f + %f?\n\n", a, b);
    scanf("%f", &resp);
    if(resp != soma){
      printf("\n\nResposta errada, a resposta certa é: %f\n\n", soma);
    }else{
      printf("\n\nVocê acertou!\n\n");
      acertos++;
    }
  }
  printf("Você acertou um total de: %d questões", acertos);
  return 0;
}