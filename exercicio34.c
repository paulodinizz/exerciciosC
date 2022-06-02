#include <stdio.h>

int main(void) {
  float nota;
  int falta;
  printf("Digite a nota do aluno: ");
  scanf("%f", &nota);
  printf("Digite a quantidade de faltas do aluno: ");
  scanf("%d", &falta);

  if(nota >= 9.0 && nota<= 10.0){
    if(falta <=20){
      printf("conceito = A");
    }else{
      printf("Conceito = B");
    }
  }else if(nota >=7.5 && nota <= 8.9){
    if(falta <=20){
      printf("conceito = B");
    }else{
      printf("Conceito = C");
    }
  }else if(nota >=5.0 && nota <=7.4){
    if(falta <=20){
      printf("conceito = c");
    }else{
      printf("Conceito = D");
    }
  }else if(nota >=4.0 && nota <=4.9){
    if(falta <=20){
      printf("conceito = D");
    }else{
      printf("Conceito = E");
    }
  }else{
    if(falta <=20){
      printf("conceito = E");
    }else{
      printf("Conceito = E");
    }
  }
  return 0;
}