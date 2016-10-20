#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>


int main()

{

int rutas[8][3]={  {2,3,4},
				    {2,5,8},
				    {2,6,10},
				    {5,6,7},
				    {8,9,10},
				    {3,6,9},
					{4,7,10},
				    {8,6,4} };


int tablero[3][3]={ {2,3,4},
				    {5,6,7},
				    {8,9,10} };
				    
int vector[9]={2,3,4,5,6,7,8,9,10};		
printf("\n\n\t\t\t\t\t   JUEGO DEL GATO, A QUE NO LA CUAJAS!\n");
printf("_____________________________________________________________________________________________________________________");		    

printf("\n\n\n\n\n\n");
printf("\t\t\t\t\t\t  %d    | %d    | %d   \n",tablero[0][0],tablero[0][1],tablero[0][2]);
printf("\t\t\t\t\t\t ___________________ \n");
printf("\t\t\t\t\t\t  %d    | %d    | %d   \n",tablero[1][0],tablero[1][1],tablero[1][2]);
printf("\t\t\t\t\t\t ___________________\n");
printf("\t\t\t\t\t\t  %d    | %d    | %d   \n\n\n",tablero[2][0],tablero[2][1],tablero[2][2]);

 



 int turno=0;
 int turnos=0;
 int posicion=0;
 int bandera=19;
 int amenazas=0;
  int unos=0;
  int aux=0;
 int w=0;
 int b=0;
 int cont=0;
 int z=0;
 char usuario[30];
 printf("\t\t\t\t\t\t INGRESA TU NOMBRE:  \n");
 scanf("\t\t\t\t\t %s",& usuario);
 do{
 	
 int k=0;

 printf("\t\t\t\t\t\tDe quien es el Turno? \n");
 printf("\t\t\t\t\t\t1=Computadora \n\t\t\t\t\t\t2=Usuario:    ");
 scanf("%d",&turno);
 	int indice=0;

    switch (turno) {
        case 1:
                
                printf("\t\t\t\t\t\t\n Computadora\n");
                if(turnos==0)
                {
                	  for (int x=0; x<8;x++) 
				   {
            
                  		for (int y=0;y<3;y++) 
					   {
                             if(rutas[x][y]==6)  
			                	rutas[x][y]=1;
								              	    
              
						}
					}
					//--------------------------------
					for (int x=0; x<3;x++) 
				   {
            
                  		for (int y=0;y<3;y++) 
					   {
                             if(tablero[x][y]==6)  
			                	tablero[x][y]=1;
								              	    
              
						}
					}
                    
                  //--------------------------------------
				}
				if(turnos!=0){
				
				 
					
				  for (  z=0; z<8 ;z++) 
				   {
				   	        aux=50;
				
				        	unos=0;
                        	amenazas=0;
                             cont=0;
                        	
                        	
                  		for (int y=0;y<3;y++) 
					   {
                             if(rutas[z][y]==0 ) {
                             	 amenazas++;
							 } 
			                 	              	    
                              else if(rutas[z][y]==1){
                              unos++;	
							  }
                              
						}
						if(amenazas==2 && unos==0)
						{
							break;
						}
		         	}
						if(amenazas==2 && unos==0 )  //if para defenderse
						{
						    
						 cont++;
							for (int y=0;y<3;y++) 
					        {
                             if(rutas[z][y]==0) 
							   {} else
							   {
							   	aux=rutas[z][y];
							   	rutas[z][y]=1;
							   }
			                

					       	}	
						
						
						
						  for (int x=0; x<8;x++) 
				            {
            
                  		for (int y=0;y<3;y++) 
					          {
                             if(rutas[x][y]==aux)  
			                	rutas[x][y]=1;
								              	    
              
						     }
				      	}
						
						
						
							for (int x=0; x<3;x++) 
				             {
            
                  	        	for (int y=0;y<3;y++) 
					             {
                             if(tablero[x][y]==aux)  
			                	tablero[x][y]=1;
								              	    
              
				  	         	}
				          	}
				          	
				            
				          }
						  
						  
						  
						  if(cont==0 ){ 
				          
				        
						     for (int x=0; x<8;x++) 
				             {
				             	 if(vector[x]!=0 && vector[x]!=1)
				             	  {
				             	  	bandera=vector[x];
				             	  	break;
								   }
							 }
			
							
                 
									  for (int x=0; x<8;x++) 
							   {
			            
			                  		for (int y=0;y<3;y++) 
								   {
			                             if(rutas[x][y]==bandera)  
						                	rutas[x][y]=1;
											              	    
			              
									}
								}
						  //else if para atacar 
											   
											   	for (int x=0; x<3;x++) 
									   {
					            
					                  		for (int y=0;y<3;y++) 
										   {
					                             if(tablero[x][y]==bandera)  
								                	tablero[x][y]=1
													;
													              	    
					              
											}
										}
						   
						   
						   
					      
						
						  
						  
                   }
						
					

				}
                
                turnos++;
                break;
        case 2:
             
               
                printf("\t\t\t\t\t %s  Que posicion desea jugar?  \n",& usuario);
                scanf("\t\t\t\t\t %d",&posicion);
                 
                  for (int x=0; x<8;x++) 
				   {
            
                  		for (int y=0;y<3;y++) 
					   {
                             if(rutas[x][y]==posicion)  
			                	rutas[x][y]=0;
								              	    
              
						}
					}
					//--------------------------------
					for (int x=0; x<3;x++) 
				   {
            
                  		for (int y=0;y<3;y++) 
					   {
                             if(tablero[x][y]==posicion)  
			                	tablero[x][y]=0;
								              	    
              
						}
					}
                
                
                turnos++;
                break;
       
        default:
                printf("\t\t\t\t\t\t\n Esa opcion no existe\n");
}
	
	//--------------------------------------------	
	
	system("cls");	

printf("\n\n\t\t\t\t\t   JUEGO DEL GATO, A QUE NO LA CUAJAS!\n");
printf("_____________________________________________________________________________________________________________________\n");		    

printf("\n\n\n\n\n\n");	        
printf("\t\t\t\t\t\t  %d    | %d    | %d   \n",tablero[0][0],tablero[0][1],tablero[0][2]);
printf("\t\t\t\t\t\t ___________________ \n");
printf("\t\t\t\t\t\t  %d    | %d    | %d   \n",tablero[1][0],tablero[1][1],tablero[1][2]);
printf("\t\t\t\t\t\t ___________________\n");
printf("\t\t\t\t\t\t  %d    | %d    | %d   \n\n\n",tablero[2][0],tablero[2][1],tablero[2][2]);
					
					
					for(int i=0; i<3; i++){ 
					for(int j=0; j<3; j++){ 
					vector[k]= tablero[i][j]; 
					k++; 
					}} 
					
				 
				
	      	 for (int x=0; x<8;x++) 
			   {
                 if((rutas[x][0]==1 && rutas[x][1]==1 && rutas[x][2]==1) | (rutas[x][0]==0 && rutas[x][1]==0 && rutas[x][2]==0 ))
				  {
				  
				   bandera=20; 	
				   break;}			              	    
                 else
                 {
                 	bandera =19;
				 }
                   
		
			}
				} while(bandera!=20);
				
				                printf("\t\t\t\t\t  ------------------------------------------\n");

				                printf("\t\t\t\t\t  |El juego a Terminado , Ya hay un ganador|\n");
				                printf("\t\t\t\t\t  |Record del juego:   %d  Turnos           |\n",turnos);
				                printf("\t\t\t\t\t  ------------------------------------------\n");


}
