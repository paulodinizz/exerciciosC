#include <stdio.h>

int main(void) {
  int mes;
  int dia;
  int ano;
  printf("Digite o dia: ");
  scanf("%d", &dia);
  printf("Digite o mês: ");
  scanf("%d", &mes);
  printf("Digite o ano: ");
  scanf("%d", &ano);

  if(ano <= 2008){
    if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0)){
    if((mes == 2 && dia >=1 && dia<=29) ){
      printf("É uma data válida!");
    }else if (((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <=30))){
      printf("É uma data válida!");
    }else if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)){
      printf("É uma data válida");
    }else{
      printf("Não é uma data válida");
    }
  }else{
    if((mes == 2 && dia >=1 && dia<=28) ){
      printf("É uma data válida!");
    }else if (((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia >= 1 && dia <=30))){
      printf("É uma data válida!");
    }else if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)){
      printf("É uma data válida");
    }else{
      printf("Não é uma data válida");
    }
  }
  }else{
    printf("Data inválida");
  }
  return 0;
}