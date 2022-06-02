#include <stdio.h>

int main(void) {
  float lab;
  float prova;
  float exameFinal;
  printf("Digite a nota do trabalho de laboratório:");
  scanf("%f", &lab);
  printf("Digite a nota da avaliação semestral:");
  scanf("%f", &prova);
  printf("Digite a nota do exame final:");
  scanf("%f", &exameFinal);

  float notaTotal = ((lab * 2) + (prova * 3) + (exameFinal * 5)) / 10;

  if(notaTotal >= 0 && notaTotal <= 2.9){
    printf("O aluno está reprovado!\n");
    printf("Sua nota total foi:%.2f", notaTotal);
  }else if(notaTotal >= 3 && notaTotal <= 4.9){
    printf("O aluno está de recuperação!\n");
    printf("Sua nota total foi:%.2f", notaTotal);
  }else{
    printf("O aluno foi aprovado!\n");
    printf("Sua nota total foi:%.2f", notaTotal);
  }
  return 0;
}