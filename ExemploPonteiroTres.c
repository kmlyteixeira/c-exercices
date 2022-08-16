#include <stdio.h>

main (){
	int *p, *p1;
	int i = 10;
	p = &i;
	p1 = p;
	printf("%d\n", *p1);
	
	int j = 20;
	
	p1 =&j;
	printf("%d\n", *p1);
	*p1 = *p;
	printf("%d\n", *p1);
	
	return 0;
}
