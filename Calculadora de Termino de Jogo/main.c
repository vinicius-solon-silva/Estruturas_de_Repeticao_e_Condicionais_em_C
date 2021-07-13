#include <stdio.h>

int main(void) {
 
  int horas, minutos;
  
  printf("Por favor, insira um numero informando somente as horas em que a partida de futebol teve inicio: ");
  scanf("%d",&horas);

//Estou considerando os 15min de intervalo entre o primeiro e o segundo tempo

  if (horas>=0 && horas <=23){

    printf("\nAgora insira os minutos do horario do inicio do jogo: ");
    scanf("%d", &minutos);

    if (horas<23 && minutos>=0 && minutos <=14){
      
      horas=horas+1;
      minutos=minutos+45;
      printf("\nA partida do jogo irá terminar as: %dh%d",horas,minutos);

    }else if (horas==23 && minutos>=0 && minutos <=14){
      
      horas=00;
      minutos=minutos+45;
      printf("\nA partida do jogo irá terminar as: %dh%d",horas,minutos);

    }else if (horas>=0 && horas<22 && minutos>14 && minutos <=59){

      horas=horas+2;
      minutos=minutos-15;
      printf("\nA partida do jogo irá terminar as: %dh%d",horas,minutos);

    }else if (horas==22 && minutos>14 && minutos <=59){

      horas=0;
      minutos=minutos-15;
      printf("\nA partida do jogo irá terminar as: %dh%d",horas,minutos);
      
    }else {
      printf("\n\nValor de minutos incorreto!!");}

      
  } else{
   printf("\n\nValor de horas incorreto!");
  }  

  return 0;
}