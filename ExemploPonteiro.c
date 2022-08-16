#include <stdio.h>

main (){
	int i=100;
	int *p;
	p=&i;
	
	printf("\n Conteudo apontado por p: %d", *p);
	printf("\n Conteudo da variavel i: %d", i);
	
	printf("\n Endereço em p: %d", p);
	
	*p=12;
	printf("\n Conteudo apontado por p: %d", *p);
	printf("\n Conteudo da variavel i: %d", i);
	
	printf("\n Endereço em p: %d", p);
	
	i=547;
	printf("\n Conteudo apontado por p: %d", *p);
	printf("\n Conteudo da variavel i: %d", i);
	
	printf("\n Endereço em p: %d", p);
}
