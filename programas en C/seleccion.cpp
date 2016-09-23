#include <stdio.h>

int main()
{
int v[16]={5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13}; //Declaracion del vector a ordenar
int i, j, pos_men; //declarracion de variables enteras
double tmp=0; // declaracion de variable tipo double

	for (i=0; i<16-1; i++) //for desde 0 a 5 para recorrer el arreglo hasta el final
	{
		// Menor elemento del vector v[i..N-1]
		pos_men=i; //asignamos a pos_menor el valor ue va tomando i
			for (j=i+1; j<16; j++)//ciclo anidado para hacer los intercambios
			
		
				if (v[j] < v[pos_men])//comparamos si los numeros son menores
				
				
					pos_men = j;// hacemos pos_men igual a el valor que tome j en el ciclo
					// Coloca el mínimo en v[i]
					tmp = v[i];// guardamos el valor en la variable temporal
					v[i] = v[pos_men];// movemos los valores del arreglo
					v[pos_men] = tmp;//vaciamos temporal en el espacio vacio
				
				
	}
printf("\nVector Ordenado: \n");//mensaje de vector ordenado
		for(i=0;i<16;i++)//ciclo desde 0 hasta 16
		{
			printf("%d"", ",v[i]); //imprimirmos los valores del arreglo
		}
}




