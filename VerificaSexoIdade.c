/*
Aluna: Kemily T da Rosa
Verificando SEXO E IDADE
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

char sexo;
int idade;
main()
{
    setlocale(LC_ALL, "Portuguese");

    printf(" \n===========================================");
    printf(" \n\t SERÁ QUE VOCÊ PODERÁ SAIR SOZINHO(A)? ");
    printf(" \n===========================================");
    printf("\n\n\n Informe uma letra para o Sexo:  ");
    scanf("%s", &sexo);

    sexo = toupper(sexo);

    printf("\n\n\n Informe sua Idade:  ");

    scanf("%i", &idade);

    if ((sexo == 'M') && (idade >= 18))
        printf("\n\n Poderá ir na Igreja sozinho");
    else if ((sexo == 'F') && (idade >= 35))
        printf("\n\n Poderá ir na Igreja sozinha");
    else
        printf("\n\n Ai ai ai:  Vai ficar em casa!");

    printf("\n\n\n");
}
