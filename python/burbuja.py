from time import time #libreria necesaria para calcular el tiempo
inicio= time()	#inicio del programa
lista = [5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13] #Declaracion del arreglo
for i in range (1, len(lista)):	#ciclo para recorrer el arreglo
	for j in range (len(lista) - i):	#ciclo para colocar j en el ultimo lugar
		if (lista[j] > lista[j+1]):		#condicion para identificar el mayor
			lista[j+1], lista[j] = lista[j], lista[j+1]	#intercambio de valores
print lista		#impresion de la lista
fin= time()		#fin del programa
print "Tiempo", fin-inicio	#impresion del tiempo

