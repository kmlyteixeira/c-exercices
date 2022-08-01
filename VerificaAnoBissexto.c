/*
Aluna: Kemily T da Rosa
Verificando se o ano é Bissexto
*/
#include <stdio.h> 
#include <locale.h> 
int ano;
main(){
	setlocale(LC_ALL, "Portuguese"); 
	
	printf(" \n======================= "); 
	printf(" \n\t Este ano é BISSEXTO? ");
	printf(" \n======================= "); 
	printf("\n\n\n Informe um Número: "); 
	scanf("%i",&ano);
	
	if (ano%4==0){
		printf("\n\n ESSE ANO É BISSEXTO");
	} else {
		printf("\n\n ESSE ANO NÃO É BISSEXTO");
	}
} 
