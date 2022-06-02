#include <stdio.h>

int main(void) {
  float precAntigo;
  printf("Digite o preço antigo: ");
  scanf("%f", &precAntigo);
  if(precAntigo <=50){
    float precNovo = precAntigo + (precAntigo * 0.05);
    printf("O preço novo é: %.2f", precNovo);
    if(precNovo <80){
      printf("Barato!");
    }else if(precNovo >= 80 && precNovo <= 120){
      printf("Normal!");
    }else if(precNovo > 120 && precNovo <= 200){
      printf("Caro!");
    }else{
      printf("Muito caro!");
    }
  }else if(precAntigo > 50 && precAntigo <=100){
    float precNovo = precAntigo + (precAntigo * 0.1);
    printf("O preço novo é: %.2f\n", precNovo);
    if(precNovo <80){
      printf("Barato!");
    }else if(precNovo >= 80 && precNovo <= 120){
      printf("Normal!");
    }else if(precNovo > 120 && precNovo <= 200){
      printf("Caro!");
    }else{
      printf("Muito caro!");
    }
  }else{
    float precNovo = precAntigo + (precAntigo * 0.15);
    printf("O preço novo é: %.2f\n", precNovo);
    if(precNovo <80){
      printf("Barato!");
    }else if(precNovo >= 80 && precNovo <= 120){
      printf("Normal!");
    }else if(precNovo > 120 && precNovo <= 200){
      printf("Caro!");
    }else{
      printf("Muito caro!");
    }
  }
  return 0;
}