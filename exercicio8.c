#include <stdio.h>
#include <math.h>

int main(void) {
  float num1;
  float num2;
  printf("Digite a primeira nota:");
  scanf("%f", &num1);
  printf("Digite a segunda nota:");
  scanf("%f", &num2);

  if(num1>=0.0 && num1<=10.0 && num2>=0.0 && num2<=10.0){
    float media = (num1 + num2) / 2;
    printf("A nota média dos alunos é:%.1f", media);
  }else{
    printf("Notas não aceitas, digite o valor corretamente!");
  }
  return 0;
}