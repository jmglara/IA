#include <iostream>
using namespace std;
 
 
/*                Estructura de los nodos de la cola      
------------------------------------------------------------------------*/
struct nodo
{
    int nro;
    struct nodo *sgte;
};
 
 
/*                      Estructura de la cola      
------------------------------------------------------------------------*/
struct cola
{
    nodo *delante;
    nodo *atras  ;
};
 
 
/*                        Encolar elemento      
------------------------------------------------------------------------*/
void encolar( struct cola &q, int valor )
{
     struct nodo *aux = new(struct nodo);
     
     aux->nro = valor;
     aux->sgte = NULL;
     
     if( q.delante == NULL)
         q.delante = aux;   // encola el primero elemento
     else
         (q.atras)->sgte = aux;
         
     q.atras = aux;        // puntero que siempre apunta al ultimo elemento
     
}
 
/*                        Desencolar elemento      
------------------------------------------------------------------------*/
int desencolar( struct cola &q )
{
     int num ;
     struct nodo *aux ;
     
     aux = q.delante;      // aux apunta al inicio de la cola
     num = aux->nro;
     q.delante = (q.delante)->sgte;
     delete(aux);          // libera memoria a donde apuntaba aux
     
     return num;
}
 
/*                        Mostrar Cola      
------------------------------------------------------------------------*/
void muestraCola( struct cola q )
{
     struct nodo *aux;
     
     aux = q.delante;
         
     while( aux != NULL )//ciclo que inidca hasta donde llega el final de la cola
     {
            cout<<"   "<< aux->nro ;
            aux = aux->sgte;
     }    
}
 

 

/*                        Funcion Principal        
------------------------------------------------------------------------*/
int main()
{
    struct cola q; //estructura tipo cola q
   
    q.delante = NULL; //declaramos q.delante como nulo
    q.atras   = NULL;//declaramos q.atras como nulo
     
    
     int visitados[8]={1,2,3,4,5,6,7,8}; //declaracion del arreglo visitados
     int recorrido[8]={0,0,0,0,0,0,0,0}; //declaracion del arreglo recorrdio
   
    int dato,dato2;  // numero a encolar
    int op;    // opcion del menu
    int x ;    // numero que devuelve la funcon pop
    int p=0;   
     int matriz[8][8] = {   {0,1,1,1,0,0,0,0}, //declaracion de la matriz de adyacencia
	                        {1,0,1,0,1,0,0,0},
							{1,1,0,1,0,1,0,0},
							{1,0,1,0,0,0,1,0},
							{0,1,0,0,0,1,0,1},
							{0,0,1,0,1,0,1,1},
							{0,0,0,1,0,1,0,1},
							{0,0,0,0,1,1,1,0}};
    system("color 0b");//color de las letras
                  cout<< "\n Nodo de inicio: "; cin>> dato; //ingreso del nodo inicial por el usurio
                 cout<< "\n Nodo de destino: "; cin>> dato2;// ingreso del nodo destino por el usuario

              
                  
                  
                  
             
				  
				  do{//inicio del do while para las iteraciones
				  visitados[dato-1]=0; //declaramos el nodo inicial como visitado
                  
                  
                  
                  
                  for(int i=0; i<=7; i++)//ciclo que recorre la fila para ver encontrar adyacencias
                  {
                  	if(matriz[i][dato-1]==1)//se comprueba si se encuentra una adyacencia durante el recorrido
                        
                        if(visitados[i]!=0)//se comprueba si ese nodo ya fue visitado anteriormente
					    {
						
						visitados[i]=0;// si no fue visitado se marca como visitado
                  		
                  		encolar( q, i+1);//se mete el nodo a la cola 
					  
              }
                     
				  }
				     cout<<"Cola acual " ;//mensaje de cola actual
                 if(q.delante!=NULL) muestraCola( q );//si el puntero delante es diferente de nulo se muestra los datos de la cola

                             cout<<"\n " ;//salto de linea




                 x = desencolar( q );// funcion para sacar de la cola, y x recibe el valor
                 cout<<"\n\n\t\tNodo "<< x <<"   sale de la cola\n\n";//mensaje del nodo que salio de la cola
                 dato=x;// hacemos que dato sea igual a x




			   recorrido[p]=dato;// metemos al dato al vector de los odos recorridos

				  p++;// incrementamos p
			}while(x!=dato2);//condicion para detener el ciclo hasta que llege al nodo destino
			
			 cout<<"\n " ;//salto de linea
			 
			 cout<<"Secuencia del recorrido " ;// mensaje de la secuencia del recorrido
			 			 cout<<"\n " ;//salto de linea

			for(int i=0; i<=7 ; i++)//ciclo para recorrer el vector de recorridos
			{
				if(recorrido[i]!=0)//comprueba que solo muestre los nodos recorridos
			cout<<"  "<< recorrido[i] ;//imprime vector

			}
			
       
		
	
   
   
}
