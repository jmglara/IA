from time import time 	#libreria para calcular tiempo
inicio= time()		#inicio del programa
lista = [5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13] #Declaracion del arreglo
for i in range(len(lista)):		#Ciclo hasta la longitud de la lista
	tmp = lista[i]			#asignacion de valor
	j = i - 1				#asignacion de valor
	while j >= 0 and lista[j] > tmp: #ciclo mientras j sea mayor o igual a 0 y lista en posicion j sea mayor que tmp
		lista[j+1] = lista[j]	#intercambio de valor
		j -= 1					#retroceso de la posicion
		lista[j+1] = tmp		#asignacion de valor
print lista 				#impresion del vector
fin= time()			#fin del programa
print "Tiempo", fin - inicio	#impresion del tiempo