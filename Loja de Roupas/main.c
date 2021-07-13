#include <stdio.h>


int main(void){

    int branca = 0, colorida = 0, moletom = 0, calca = 0, bone = 0, qtdetotal = 0, totalreais = 0, numeropedidos = 0, qtde = 0, pedido = 0, total = 0, tbranca = 0, tcolorida = 0, tmoletom = 0, tcalca = 0, tbone = 0, loop;

    printf("Bem-vindo a nossa loja! Digite um dos codigos abaixo para realizar o pedido de compra dos itens correspondentes:\n\n");
    printf("Codigo 1: Camiseta branca - R$ 7,00\n");
    printf("Codigo 2: Camiseta colorida - R$ 9,00\n");
    printf("Codigo 3: Moleton - R$ 17,00\n");
    printf("Codigo 4: Calca - R$ 20,00\n");
    printf("Codigo 5: Bone - R$ 5,00\n\n");
    printf("Quando terminar os pedidos e quiser um relatorio final com todos os valores da compra, digite 9.\n");


    for (loop = 0;loop<2146483647;loop++)
  {
    printf("\n\nDigite aqui o numero do codigo do item desejado: ");
    scanf("%d", &loop);

    if (loop == 1){
        printf("\nCamiseta Branca escolhida!\n");
        printf("Qual a quantidade desejada?:");
        scanf("%d", &qtde);
        branca = branca + qtde;
        pedido = (7 * qtde);
        totalreais = (totalreais + pedido);
        tbranca = tbranca + pedido;
        printf("\n\nValor a ser pago: R$%d", tbranca);
        numeropedidos++;}

    if (loop == 2){
        printf("\nCamiseta Colorida escolhida!\n");
        printf("Qual a quantidade desejada?:");
        scanf("%d", &qtde);
        colorida = colorida + qtde;
        pedido =(9*qtde);
        totalreais = (totalreais + pedido);
        tcolorida = tcolorida + pedido;
        printf("\n\nValor a ser pago: R$%d", tcolorida);
        numeropedidos++;}

    if (loop == 3){
        printf("\nMoletom  escolhido!\n");
        printf("Qual a quantidade desejada?: ");
        scanf("%d", &qtde);
        moletom = moletom + qtde;
        pedido = (17*qtde);
        totalreais = (totalreais + pedido);
        tmoletom = tmoletom + pedido;
        printf("\n\nValor a ser pago: R$%d", tmoletom);
        numeropedidos++;}

    if (loop == 4){
        printf("\nCalca escolhida!\n");
        printf("Qual a quantidade desejada?: ");
        scanf("%d", &qtde);
        calca = calca + qtde;
        pedido = (20*qtde);
        totalreais = (totalreais + pedido);
        tcalca = tcalca + pedido;
        printf("\n\nValor a ser pago: R$%d", tcalca);
        numeropedidos++;}

    if (loop == 5){
        printf("\nBone escolhido!\n");
        printf("Qual a quantidade desejada?:");
        scanf("%d", &qtde);
        bone = bone + qtde;
        pedido = (5*qtde);
        totalreais = (totalreais + pedido);
        tbone = tbone + pedido;
        printf("\n\nValor a ser pago: R$%d", tbone);
        numeropedidos++;}

    if (loop == 9){
        break;}

    
    total=(tbranca + tcolorida + tmoletom + tcalca + tbone);
  }

    qtdetotal = (branca + colorida + moletom + calca + bone);
    printf("\n|-------------------------RELATORIO-------------------------|\n");
    printf("Quantidade de camisetas brancas vendidas:    %d\n", branca);
    printf("Quantidade de camisetas coloridas vendidas:  %d\n",colorida);
    printf("Quantidade de moletons vendidos:             %d\n", moletom);
    printf("Quantidade de calcas vendidas:               %d\n", calca);
    printf("Quantidade de bones vendidos:                %d\n\n", bone);

    printf("Total de unidades vendidas no periodo: %d\n\n", qtdetotal);

    printf("Total a ser pago: R$%d\n\n", totalreais);

    printf("Numero de pedidos processados: %d\n\n", numeropedidos);

    return 0;
}