#include<stdio.h>
int quicksort(int list[], int min, int max)
{
  int pivot, i, j, tmp;		//declaracion de variables auxiliares
  if(min < max) {			//comparacion de que el minimo sea menor que el maximo
    pivot = min;			//pivote toma el valor del min
    i = min;				// i toma el valor del min
    j = max;				//j toma el valor del max
    while(i < j) {			//ciclo con la condicion de que i sea menor que j
      //ciclo mientras que list en la posicion i sea menor que lista en la posicion del pivote && i sea menor o igual al maximo
	  while(list[i] <= list[pivot] && i <= max)		
        i++;		//incremento del valor de i 
      //ciclo mientras que list en la posicion i sea mayor que list en la posicion del pivote && j sea mayor o igual a min
	  while(list[j] > list[pivot] && j >= min)
        j--;		//incremento del valor de j
      if(i < j) {		//condicion mientras i sea menor que j
        tmp = list[i];		//asignacion del valor de list en la posicion i a la variable tmp
        list[i] = list[j];	//asignacion del valor de list en la posicion j a la variable list en la posicion i
        list[j] = tmp;		//asignacion del valor de tmp a la variable list en la posicion j
      }
    }
    tmp = list[j];		//tmp toma el valor de list en la posicion j
    list[j] = list[pivot];	// list en la posicion j toma el valor de list en la posicion del pivote
    list[pivot] = tmp;		// list en la posicion del pivote toma el valor de tmp
    quicksort(list, min, j-1);		//se manda a llamar asi misma la funcion cambiando los valores para hacer el recorrido
    quicksort(list, j+1, max);		//se manda a llamar asi misma la funcion cambiando los valores para hacer el recorrido 
  }
}
int main()
{
	int list[16]={5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13}; //Declaracion del vector a ordenar   
    int i, n = 10;	//declaracion de variables auxiliares

    quicksort(list, 0, 15);	//llamando la funcion enviando los parametros necesarios
    
   //Impresion del vector ya ordenado 
	printf("\nVector Ordenado: \n");//mensaje de vector ordenado
		for(i=0;i<16;i++)//ciclo desde 0 hasta 16
		{ 
			printf("%d"", ",list[i]); //imprimirmos los valores del arreglo
		}
}

