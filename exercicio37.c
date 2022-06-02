#include <stdio.h>

int main(void) {
  int chegadaHora;
  int chegadaMin;
  int partidaHora;
  int partidaMin;
  int tarifaPagar;
  int tarifa;
  printf("Digite o horário de entrada: ");
  scanf("%d %d", &chegadaHora, &chegadaMin);
  printf("Digite o horario de partida: ");
  scanf("%d %d", &partidaHora, &partidaMin);

  printf("Seu horário de chegada: %dh %dm\n",chegadaHora, chegadaMin);
  printf("Seu horário de partida: %dh %dm",partidaHora, partidaMin);
  if( chegadaHora > partidaHora){
    tarifa = (((24 - chegadaHora) + partidaHora)* 60) + (chegadaMin - partidaMin);
    if(tarifa <= 60){
      tarifaPagar = 1;
      printf("\n\n%d", tarifaPagar);
    }else if(tarifa <= 120){
      tarifaPagar = 1 * 2;
      printf("\n\n%d", tarifaPagar);
    }else if(tarifa <= 180){
      tarifaPagar = 1.4 * 3;
      printf("\n\n%d", tarifaPagar);
    }else if(tarifa <= 240){
      tarifaPagar = 1.4 * 4;
      printf("\n\n%d", tarifaPagar);
    }else{
      tarifaPagar = 2 * (tarifa / 60);
      printf("\n\n%d", tarifaPagar);
    }
  }
  if(chegadaHora < partidaHora){
    tarifa = ((chegadaHora - partidaHora)* 60) + (chegadaMin - partidaMin);
    tarifa = tarifa * -1;
    if(tarifa <= 60){
      tarifaPagar = 1;
      printf("\n\n%d", tarifaPagar);
    }else if(tarifa <= 120){
      tarifaPagar = 1 * 2;
      printf("\n\n%d", tarifaPagar);
    }else if(tarifa <= 180){
      tarifaPagar = 1.4 * 3;
      printf("\n\n%d", tarifaPagar);
    }else if(tarifa <= 240){
      tarifaPagar = 1.4 * 4;
      printf("\n\n%d", tarifaPagar);
    }else{
      tarifaPagar = 2 * (tarifa / 60);
      printf("\n\n%d", tarifaPagar);
    }
  }else{}
  return 0;
}