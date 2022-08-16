#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 100

/* 
    Aluna: Kemily Teixeira da Rosa
    Professor: Marcelo Petri
    Aula: 12/08/2022

    Atividade 01)
	Desenvolva um programa em C:

    O programa a seguir modificará as vogais de uma frase.
    O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor.
    Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.
    Usar uma função void para realizar a troca e uma função para realizar a impressão da frase trocada.
    A função deve ter como parâmetro um ponteiro char referente ao vetor.
    Foi utilizado a função gets() da biblioteca string.h para realizar a leitura da frase.
    Foi usado o switch para realizar as trocas.
    Foi considerado só as letras minúsculas.
	
*/

void replace_vogais(char string[MAX]){
	for(int i = 0; i < MAX; ++i)
		switch(string[i]){
		case 'a':
			string[i] = 'u';
			break;
		case 'e':
			string[i] = 'o';
			break;
		case 'i':
			string[i] = 'e';
			break;
		case 'o':
			string[i] = 'a';
			break;	
		case 'u': 
			string[i] = 'i';
			break;
		}
}

void new_string(char string[MAX]){
	printf("\n%s\n",string);
}


main() {

	char string[MAX];

    printf("\n ================================ \n");
    printf("\n Alterando as vogais de uma frase \n");
    printf("\n ================================ \n");
	
	printf("\nInsira uma frase de no máximo 100 caracteres\n");
	fgets(string,MAX+1,stdin);
	new_string(string);
	replace_vogais(string);
	new_string(string);
}