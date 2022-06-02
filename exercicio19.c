#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um número:");
  scanf("%d", &num);
  float cinco = num % 5 == 0;
  float tres = num % 3 == 0;

  if (num % 5 == 0 && num % 3 == 0){
    printf("O número pode ser divido por 3 ou por 5 simultaneamente");
  }else{
    printf("O número é dívisivel por 3 ou por 5");
  }
  return 0;
}