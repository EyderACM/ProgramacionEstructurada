#include <stdio.h>


int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int numero3;

	
		printf("\nDame un tres n�meros: \n");
		scanf("%d",&numero1);
		scanf("%d",&numero2);
		scanf("%d",&numero3);
		if(numero1==numero2){
			if(numero2==numero3){
				printf("Los n�meros son iguales");
			}
			
		}else if(numero1>numero2){
			if(numero1>numero3){
			printf ("El mayor n�mero es: %d", numero1);
			}
		}else if(numero2>numero3){
			printf ("El mayor n�mero es: %d", numero2);
		}else{
			printf("El n�mero mayor es: %d", numero3);
		}

	
	
	
	
	return 0;
}
