#include <stdio.h>

int main(void) {
  float altura;
  float peso;
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  if(altura < 1.20){
    if(peso < 60){
      printf("Sua classificação é A!");
    }else if(peso >= 60 && peso <= 90){
      printf("Sua classificação é D");
    }else{
      printf("Sua classificação é G");
    }
  }else if(altura >= 1.20 && altura <= 1.70){
    if(peso < 60){
      printf("Sua classificação é B!");
    }else if(peso >= 60 && peso <= 90){
      printf("Sua classificação é E");
    }else{
      printf("Sua classificação é H");
    }
  }else{
    if(peso < 60){
      printf("Sua classificação é C!");
    }else if(peso >= 60 && peso <= 90){
      printf("Sua classificação é F");
    }else{
      printf("Sua classificação é I");
    }
  }
}