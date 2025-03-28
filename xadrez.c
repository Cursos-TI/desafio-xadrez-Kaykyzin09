#include <stdio.h>

//função recursiva para movimento da Torre
void moverTorre(int casas1){
    if(casas1 > 0){
        printf("Direita\n");
        moverTorre(casas1 - 1);
    }
}    
//função recursiva para movimento da bispo
void moverBispo(int casas2){
    if(casas2 > 0){
        printf("Cima, Direita\n");
        moverBispo(casas2 - 1);
    }
}
//função recursiva para movimento da Rainha
void moverRainha(int casas3){
    if(casas3 > 0){
    printf("Esquerda\n");
    moverRainha(casas3 - 1);
    }
}

int main()
{

//Exibição da Torre com recursão
    printf("### Torre ###\n");
    moverTorre(5);
 
//exibição do Bispo
    printf("\n### Bispo ###\n");
//Movimento do Bispo usando recursão e loops aninhados   
    int casaBispo = -5;
    while (casaBispo > 0)
    {
        int horizontais = 1;
        while(horizontais <= 1){
            printf("Cima, direita\n");
            horizontais++;
        }
        casaBispo--;
    }
    moverBispo(5);
    
//Exibição da variável Rainha    
    printf("\n### Rainha ###\n");
    moverRainha(8);
    
//Exibição do Cavalo
    printf("\n### Cavalo ###\n");

//declaração das variáveis do cavalo
    int cima = 2;
    int MovDireita = 1;

//loop aninhado do Cavalo para cima
    for(int i = -1; i <= cima; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("Baixo\n");
    
    }
    
//loop aninhado cavalo para direita
    int direita = 1;
    while (direita <= MovDireita)
    {
        if (direita > 5)
        {
            break;
        }
        printf("Esquerda\n");
        direita++;
    }
    
    return 0;
}