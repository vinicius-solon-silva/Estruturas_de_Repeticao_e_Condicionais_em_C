#include <stdio.h>

int main(void) {

int a,b;

printf("\n\nDigite um numero inteiro: ");
scanf("%d",&a);

printf("\nDigite um segundo numero inteiro: ");
scanf("%d",&b);

if((a+1==b) || (a-1==b)){
  printf("\nSao sequenciais!\n");
}else {
  printf("\nNao sao sequenciais!\n");
} 

  return 0;
}