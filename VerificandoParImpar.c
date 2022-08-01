/*
Aluna: Kemily Teixeira da Rosa
Verificando PAR ou IMPAR
*/
#include <stdio.h>
#include <locale.h>

int num1;
main()

{
    setlocale(LC_ALL, "Portuguese");

    printf(" \n=======================================");
    printf(" \n\t Par ou Ímpar? ");
    printf("\n=======================================");
    printf("\n\n\n Informe um Número: ");
    scanf("%i", &num1);

    if (num1 % 2 == 0)
    {
        printf("\n\n ESSE NÚMERO É PAR");
    }
    else
    {
        printf("\n\n ESSE NÚMERO É ÍMPAR");
    }
    printf("\n\n\n");
}
