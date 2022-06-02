#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  printf("Digite um número:");
  scanf("%d", &num1);
  printf("Digite outro número:");
  scanf("%d", &num2);
  if(num1>num2){
    printf("O primeiro número digitado é maior do que o segundo!\n");
    int dif = num1-num2;
    printf("A diferença entre eles é de %d!", dif);
  }else {
    printf("O segundo número digitado é maior do que o primeiro!\n");
    int dif2 = num2-num1;
    printf("A diferença entre eles é de %d!", dif2);
  }
}