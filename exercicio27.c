#include <stdio.h>

int main(void) {
  int idade;
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if(idade >= 5 && idade <= 7){
    printf("O nadador pode competir na categoria 'Infantil A' ");
  }else if(idade >= 8 && idade <= 10){
    printf("O nadador pode competir na categoria 'Infantil B' ");
  }else if(idade >= 11 && idade <= 13){
    printf("O nadador pode competir na categoria 'Juvenil A' ");
  }else if(idade >= 14 && idade <= 17){
    printf("O nadador pode competir na categoria 'Juvenil B' ");
  }else{
    printf("O nadador pode competir na categoria 'Sênior' ");
  }
  return 0;
}