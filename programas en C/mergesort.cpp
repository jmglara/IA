#include<stdio.h>
int merge(int list[], int izq, int mit, int dcha){		
  int i, j, k;			//declaracion de variables auxiliares 
  int x = mit - izq + 1;	//asignacion de mit menos el valor de izq mas 1 a la variable x
  int y =  dcha - mit;		//asignacion de dcha menos mit a la variable y
  int L[x], R[y];		//declaracion de variables auxiliares 

  for (i = 0; i < x; i++){		//ciclo de 0 mientras sea menor que n1
    L[i] = list[izq + i];		//asignacion del valor de list en la posicion izq + i a la variabel L en la posicion i 
  }
  for (j = 0; j < y; j++){		//ciclo desde 0 hastq que j deje de ser menor que y
    R[j] = list[mit + 1+ j];	//asignacion del valor de list en la posicion mit mas 1 mas el valor de j a la variable R en la posicion j
  }

  i = 0;	//reseteo de la variable i
  j = 0;	//reseteo de la variable j
  k = izq;	//asignacion del valor de izq a la variable k
  while (i < x && j < y){	//ciclo mientras que i sea menor que x && j sea menor que y
    if (L[i] <= R[j]){		//condicion mientras que l en la posicion i sea menor o igual que R en la posicion j
      list[k] = L[i];		// asignacion del valor de L en la posicion i a la variable list en la posicion k
      i++;				//incremento del valor i
    }
    else{
      list[k] = R[j];		//asignacion de valor de R en la posicion j a la variable list en la posicion k
      j++;			//incremento de la variable j
    }
    k++;		//incremento de la variable k
  }

  while (i < x){		//ciclo mientras i sea menor que x
    list[k] = L[i];		//asignacion del valor de L en la posicion i a la variable list en la posicion k
    i++;		//incremento de la variable i
    k++;		//incremento en la variable k
  }

  while (j < y){	//ciclo mientras que j sea menor que y
    list[k] = R[j];	//asignacion dle valor de R en la posicion j a la variable list en la posicion k
    j++;		//incremento de la variable j
    k++;		//incremento de la variable k
  }
}

int sort(int list[], int izq, int dcha){
  if (izq < dcha){				//condicion mientras que izq sea menor que dcha
    int mit =izq+(dcha-izq)/2;	//asoignacion de valores a mit
    sort(list, izq, mit);		//llamado de la funcion sort
    sort(list, mit+1, dcha);	//llamado de la funcion sort
    merge(list, izq, mit, dcha);	//llamado de la funcion merge
  }
}
int main(){
  int list[16]={5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13}; //Declaracion del vector a ordenar   
  int i, n = 10;	//declaracion de variables auxiliares
  
  sort(list, 0, 15);	//llamado de la funcion sort
  
   //Impresion del vector ya ordenado 
	printf("\nVector Ordenado: \n");//mensaje de vector ordenado
		for(i=0;i<16;i++)//ciclo desde 0 hasta 16
		{ 
			printf("%d"", ",list[i]); //imprimirmos los valores del arreglo
		}
}


