#include <stdio.h>

int main () {
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    
//exibição da Torre
    printf("\n### Torre ###\n");

//loop da Torre
    while(torre <= 5)
    {
        printf("Direita\n");
        torre++;
    }

//exibição do Bispo
    printf("\n### Bispo ###\n");

//loop do Bispo
    do {

    printf("Cima, Direita\n");
    bispo++;
    
    } while (bispo <= 5);
    
//exibição da Rainha
    printf("\n ### Rainha ###\n");

//loop da Rainha
    for (rainha = 1; rainha <= 8;rainha++)
    {
        printf("Esquerda\n");
    }

//exibiçao do Cavalo
    printf("\n### Cavalo ###\n");

//lood aninhado do Cavalo
    while(cavalo--)
    {
        for(int i = 0;i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    
    return 0;
}