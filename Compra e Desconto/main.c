#include <stdio.h>

int main(void) {
 
 int itens;
 float preco,desconto;

printf("\nBem-Vindo a ClangExpress!!\n\nComprando acima de 10 unidades, voce ganhara um desconto!!\n\nPor favor, insira aqui a quantidade de itens desejados: ");
scanf("%d", &itens);

printf("\nMuito bem, agora insira o preco unitario de cada item: ");
scanf("%f", &preco);

preco=itens*preco;

if(itens<=10){
    printf("\n\nO valor de sua compra ficou em: R$ %.2f", preco);}

else if((itens>=11) && (itens<=20)){
  desconto=preco*0.9;
  printf("\n\nParabens! Voce ganhou 10 porcento de desconto! O valor total de sua compra foi de R$ %.2f, para R$ %.2f ", preco, desconto);}

else if((itens>=21) && (itens<=50)){
  desconto=preco*0.85;
  printf("\n\nParabens! Voce ganhou 15 porcento de desconto! O valor total de sua compra foi de R$ %.2f, para R$ %.2f ", preco, desconto);}

else if(itens>50){
  desconto=preco*0.8;
  printf("\n\nParabens! Voce ganhou 20 porcento de desconto! O valor total de sua compra foi de R$ %.2f, para R$ %.2f ", preco, desconto);} 

  return 0;
}