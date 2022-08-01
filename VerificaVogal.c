/*
Aluna: Kemily T da Rosa
Verificando se É UMA VOGAL
*/

#include <stdio.h>
#include <locale.h>
char letra;
main()
{
    setlocale(LC_ALL, "Portuguese");

    printf(" \n=======================================  ");
    printf(" \n\t Verificando se a  Letra é uma VOGAL ");
    printf(" \n=======================================  ");
    printf("\n\n\n Informe uma Letra: ");
    scanf("%i", &letra);

    if ((letra == 'A') || (letra == 'a'))
    {
        printf("\n\n A letra informada é uma VOGAL");
    }
    else if ((letra == 'E') || (letra == 'e'))
    {
        printf("\n\n A letra informada é uma VOGAL");
    }
    else

        if ((letra == 'I') || (letra == 'i'))
    {
        printf("\n\n A letra informada é uma VOGAL");
    }
    else if ((letra == 'O') || (letra == 'o'))
    {
        printf("\n\n A letra informada é uma VOGAL");
    }
    else if ((letra == 'U') || (letra == 'u'))
    {
        printf("\n\n A letra informada é uma VOGAL");
    }
    else
    {
        printf("\n\n Esse caracter Não é VOGAL");
    }

    printf("\n\n\n");
}
