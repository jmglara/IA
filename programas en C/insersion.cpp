#include <stdio.h> //libreria de c para funciones basicas
int main (){ //inicio del programa

int lista[16]={5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13}; //Declaracion del vector a ordenar
int TAM=16, i=0, j=0;	//declaracion de variables auxiliares
double tmp;			//declaracion de variables auxiliares

	for (i=1; i<TAM; i++) 		//ciclo de 0 hasta 16 
	 { 
	tmp = lista[i];			//asignamos en tmp el valor de lista en el sitio del valor i
	for (j=i; (j>0) &&  (tmp<lista[j-1]) ; j--)		//ciclo de 0 hasta que j sea mayor que cero y el temporal sea menor que el tamaño de la lista
	lista[j] = lista[j-1];		//asignacion del valor de lista en la posicion j-1 a lista en el valor de j
	lista[j] = tmp;				//asignacion de tmp al valor de lista en la posicion j
	}  
	
	//Impresion del vector ya ordenado 
	printf("\nVector Ordenado: \n");//mensaje de vector ordenado
		for(i=0;i<16;i++)//ciclo desde 0 hasta 16
		{ 
			printf("%d"", ",lista[i]); //imprimirmos los valores del arreglo
		}
}  


