#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  
  printf("Digite o primeiro número:");
  scanf("%d", &num1);
  printf("Digite o segundo número:");
  scanf("%d", &num2);

  if(num1>num2 && num1 != num2){
    printf("O primeiro número é maior!\n");
    int dif = num1 - num2;
    printf("A diferença é:%d", dif);
  }

  if(num1==num2){
    printf("Os números digitados são iguais");
  }
  
  if(num2 > num1 && num1 != num2 ){
    printf("O segundo número é maior!\n");

    int dif2 = num2 - num1;
    printf("A diferença é:%d", dif2);
  }
}