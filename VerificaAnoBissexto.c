/*
Aluna: Kemily T da Rosa
Verificando se o ano � Bissexto
*/
#include <stdio.h> 
#include <locale.h> 
int ano;
main(){
	setlocale(LC_ALL, "Portuguese"); 
	
	printf(" \n======================= "); 
	printf(" \n\t Este ano � BISSEXTO? ");
	printf(" \n======================= "); 
	printf("\n\n\n Informe um N�mero: "); 
	scanf("%i",&ano);
	
	if (ano%4==0){
		printf("\n\n ESSE ANO � BISSEXTO");
	} else {
		printf("\n\n ESSE ANO N�O � BISSEXTO");
	}
} 
