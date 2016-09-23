#include <stdio.h> //libreria de c para funciones basicas
int main (){ //inicio del programa

    int vector [16]={5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13}; //Declaracion del vector a ordenar
    int i=0, j=0, k=0, temporal=0;		//declaracion de variables auxiliares
    
		for(i=0;i<16;i++)		//ciclo de 0 hasta 16 				
		{										
			printf("%d"", """,vector[i]); //print donde imprimira numero por numero				
		}										
    	//Ciclo en el cual se realiza la accion de ordenamiento 
    	for(i=0;i<16;i++)     //ciclo de 0 hasta 16            
    	{
    		for(j=i+1;j<16;j++)//ciclo anidado de i hasta 16 
    		{
    			if (vector[i]>vector[j])  //compara el primer elemnto del arrego con el siguiente
    			{
    			temporal=vector[i];//la varieble temporal va a aser igual al valor del vectos	
    			vector[i]=vector[j];///el valor anterior del vectro va a ser igual al siguiente	
    			vector[j]=temporal;// y el siguente sera igual a temporal		
				}
			}
		}	

	//Impresion del vector ya ordenado 
	printf("\nVector Ordenado: \n");//mensaje de vector ordenado
		for(i=0;i<16;i++)//ciclo desde 0 hasta 16
		{
			printf("%d"", ",vector[i]); //imprimirmos los valores del arreglo
		}
}

