#include <stdio.h>

int main()
{

    printf("***************************************\n");
    printf("* Boas-Vindas ao jogo da adivinhação! *\n");
    printf("***************************************\n");

    int numerosecreto = 42;
    int chute;

    printf("chute um número: ");
    scanf("%i", &chute);
    printf("Seu chute foi %i\n", chute);
    printf("------------------\n");

    int acerto = chute == numerosecreto;
    
    if (acerto)
    {
        printf("Parabéns! Você adivinhou o número secreto!\n");
    }
    else if (chute > numerosecreto)
    {
        printf("Você chutou um número maior que o número secreto.\n");
    }
    else if (chute < numerosecreto)
    {
        printf("Você chutou um número menor que o número secreto.\n");
    }
}