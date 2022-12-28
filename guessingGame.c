#include <stdio.h>
#include <stdlib.h>


int main()
{

    const int NumeroDeTentativas = 3;

    printf("***************************************\n");
    printf("* Boas-Vindas ao jogo da adivinhação! *\n");
    printf("***************************************\n");

    int numerosecreto = 42;
    int chute;

    for (int n = 1; n <= NumeroDeTentativas; n++)
    {

        printf("chute um número: ");
        scanf("%i", &chute);
        printf("Seu chute foi %i\n", chute);
        printf("------------------\n");

        int acerto = chute == numerosecreto;
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;
        
        if (chute < 0)
        {
            printf("Você não pode chutar números negativos\n");
            printf("------------------\n");
            n--;
            continue;
        }
        else if (acerto)
        {
            printf("Parabéns! Você adivinhou o número secreto!\n");
            printf("------------------\n");
            exit(0);
        }
        else if (maior)
        {
            printf("Você chutou um número maior que o número secreto.\n");
            printf("------------------\n");
        }
        else if (menor)
        {
            printf("Você chutou um número menor que o número secreto.\n");
            printf("------------------\n");
        }
    }

    printf("fim do programa\n");
}