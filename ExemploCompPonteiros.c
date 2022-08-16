#include <stdio.h>

main (){
	int *p, *p1;
	int i=10, j=10;
	p=&i;
	p1 = &j;
		
	if (p == p1) printf("Ponteiros de mesmo valor\n");
	else printf ("Ponteiros com valores distintos\n");
	
	if (p >= p1) printf("Ponteiros p maoior ou igual a p1\n");
	else printf ("Ponteiros p menor que p1\n");
	
	if (*p == *p1) printf("Ponteiros do mesmo valor\n");
	else printf ("Ponteiros com valores distintos\n");
	
	if (*p >= *p1) printf("Ponteiros p maior ou igual a p1\n");
	else printf ("Ponteiros p menor que p1\n");
	
	return 0;
}
