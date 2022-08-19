#include <stdio.h>
#include <stdlib.h>

/*
Pesquise ou desenvolva dois programas realizados na disciplina de C++.
Segundo Programa: deve ser utilizado vetores

a) Utilize as funções malloc () e free () para criar espaços dinâmicos de memória RAM.
*/
  
int
main () 
{
  
int n;
  
char * stringAleatoria;

    printf (" >> VAMOS GERAR UMA STRING ALEATORIA << \n");  
    printf (" Qual será o tamanho da sua String? ");
      
    scanf ("%d", &n);
      
    stringAleatoria = (char *) malloc (n + 1);
      
    if (stringAleatoria == NULL)
        exit (1);
      
    for (int i = 0; i < n; i++)
        
    stringAleatoria[i] = rand () % 26 + 'a';
    stringAleatoria[n] = '\0';
      
     
    printf (" Sua String montada: %s\n", stringAleatoria);
      
    free (stringAleatoria);
     
    return 0;
}