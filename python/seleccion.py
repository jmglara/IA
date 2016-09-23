from time import time   #libreria para calcular tiempo 
inicio= time()  #inicio del programa
vector =[5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13] ## declaracion del vector a ordenar

for i in range(len(vector)):  ##Ciclo desde 0 hasta la longitud del vector
    	
    for j in range(i + 1, len(vector)): ##Ciclo desde i hasta la longitud del vector 
        
        if vector[j] < vector[i]:   ##condicion si el vector j es menor al vector i
           vector[j], vector[i] = vector[i], vector[j]  #intercambio de valores
print vector            #impresion del arreglo
fin= time()             #fin del tiempo
print "Tiempo", fin - inicio    #impresion del tiempo

