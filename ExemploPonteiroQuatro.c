#include <stdio.h>

main (){
	int *p;
	int i=10, j=20, k=30;
	p=&j;
	
	printf("\n Valor de *p: %d", *p);
	printf("\n Endereco de p: %d", p);
		
	p++;
	printf("\n Valor de *p %d", *p);
	printf("\n Endereco de p %d", p);
	
	printf("\n Endereco em p: %d", ++p);
	
	printf("\n Endereco de i %d", &i);
	printf("\n Endereco de i %d", &j);
	printf("\n Endereco de i %d", &k);
	
	return 0;
}
