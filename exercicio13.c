#include <stdio.h>

int main(void) {
  float nota1;
  float nota2;
  float nota3;
  printf("Digite a primeira nota da prova:");
  scanf("%f", &nota1);
  printf("Digite a segunda nota da prova:");
  scanf("%f", &nota2);
  printf("Digite a terceira nota da prova:");
  scanf("%f", &nota3);

  // primeira e segunda nota peso 1 terceira nota peso 2
  float notaTotal = (nota1 + nota2 + (nota3 * 2))/4;
  if(notaTotal >= 60){
    printf("O aluno foi aprovado!\n");
    printf("Sua nota total foi de:%f", notaTotal);
  }else{
    printf("O aluno foi reprovado!\n");
    printf("Sua nota total foi de:%f", notaTotal);
  }
  return 0;
}