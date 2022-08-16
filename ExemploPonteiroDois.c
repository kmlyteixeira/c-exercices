#include <stdio.h>

main (){
	int i,j;
	int *p;
	
	printf("\n\n %d %d", p, &i);
	
	p = &i;
	
	printf("\n\n %d %d", p, &i);

}
