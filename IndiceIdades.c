#include <stdio.h>
#include <stdlib.h>

/*
Kemily Teixeira da Rosa
Professor Marcelo Petri

Aula 12/08/2022

Pesquise ou desenvolva dois programas realizados na disciplina de C++.
Primeiro Programa: deve ter variáveis simples

a) Utilize as funções malloc () e free () para criar espaços dinâmicos de memória RAM.
*/
  
int
main () 
{
  
  
    int * idade;
    
    int acum=0, media=0, menorMedia=0,maiorMedia=0, qtd=0;

    printf ("\n ==== INDICES DE IDADES ====");
    printf ("\n\n Quantas idades diferentes gostaria de informar? ");
    scanf ("%d", &qtd);
    
    idade = (int *) malloc (qtd + 1);

    for (int i = 0; i < qtd; i++)
    {
        printf ("\n\n Insira a idade, pressionando ENTER para enviar >>> ");
        scanf ("%d", &idade[i]);
        acum += idade[i];
    }

    media = acum/10;

    for (int i = 0; i < 10; i++)
    {
        if (idade[i] < media)
            menorMedia++;
        else if (idade[i] > media)
            maiorMedia++;
    }

    printf ("\n\n A média de todas estas idades é >>> %d", media);
    printf ("\n A quantidade de pessoas com idades abaixo da média é >>> %d", menorMedia);
    printf ("\n A quantidade de pessoas com idades acima da média é >>> %d", maiorMedia);
     
    return 0;
}
