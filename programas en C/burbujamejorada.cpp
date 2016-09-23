#include <stdio.h>
int main()	//inicio del programa
{
	int lista[16]={5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13}; //declaracion del arreglo
	bool swapped = true; 		//declaracion de variables auxiliares
	int i, j=0; 				//declaracion de variables auxiliares
	double tmp; 				//declaracion de variables auxiliares

	while (swapped) {			//ciclo mientras que el valor de swapped sea verdadero
	swapped = false; 			//cambio del valor de la variable
	j++; 						//incremento en valor de j
		for (i = 0; i < 16 - j; i++) 	//ciclo de 0 hasta 16
		
		if (lista[i] > lista[i + 1])	//condicion si el valor de lista en la posion i es mayor que el valor de lista en la posicion i +1
		 {
		 tmp = lista[i]; 		//asignacion del valor de lista a tmp
		lista[i] = lista[i + 1];		//asignacion del valor de lista i + 1 a lista en la posicion 1
		 lista[i + 1] = tmp; 			//asignacion del valor tmp a la variable lista en la posion i+1
		swapped = true; 				//cambio del valor de swapped
		} 
	}
	printf("\nVector Ordenado: \n");//mensaje de vector ordenado
		for(i=0;i<16;i++)//ciclo desde 0 hasta 16
		{
			printf("%d"", ",lista[i]); //imprimirmos los valores del arreglo
		}
}

