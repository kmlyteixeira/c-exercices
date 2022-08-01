#include <iostream> 
#include <iomanip> 
using namespace std; 

void imprimirMaiorNumero(int firstNumber, int secondNumber){
	if(firstNumber>secondNumber){
		printf( "\n\n\n\t " <<firstNumber<< " o maior valor!");
	} else {
		printf( "\n\n\n\t " <<secondNumber<< " o maior valor!");
	}
}

main()
{	
	setlocale(LC_ALL, "Portuguese");
	system ("color B");	
		
	int number1, number2;
	
	printf( "\n\n\n\t =======================================");	
	printf( "\n\t =======IMPRIMINDO O MAIOR NUMERO=======");
	printf( "\n\t ======================================="); 
	
	printf( "\n\n\n\t Insira o 1 numero:");
	scanf("%i", &number1);							
	printf( "\n\n\n\t Insira o 2 numero:");
	scanf("%i", &number2);	
	
	imprimirMaiorNumero(number1,number2);
}
