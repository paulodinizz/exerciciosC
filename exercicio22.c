#include <stdio.h>

int main(void) {
  int idade;
  int trabalho;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite seu tempo trabalhado");
  scanf("%d", &trabalho);

  if(idade >= 65 || trabalho >= 30 || idade >= 60 && trabalho >= 25){
    printf("Você pode se aposentar!");
  }else{
    printf("Você não pode se aposentar!");
  }
  return 0;
}