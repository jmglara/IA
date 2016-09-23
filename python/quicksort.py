from time import time	#libreria para calcular el tiempo
inicio= time()		#inicio del programa
lista = [5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13] #Declaracion del arreglo
def Quick(lista, min, max): #definicion de la funcion
	if min >= max: return #condicion mientras el valor minimo sea mayor o igual al maximo 
	i=min #declaracion de valores
	j=max #declaracion de valores
	pivote = lista[(min + max) / 2] #dividiendo la lista en 2
	while i <= j:	#ciclo mientras que i sea menor o igual a j
		while lista[i] < pivote:	#ciclo mientras que lista en la posicion i sea menor que el pivote
			i += 1		#incremento de i
		while lista[j] > pivote:	#ciclo mientras que lista en la posicion j sea mayor que el pivote
			j -= 1		#decremento de j 
		
		if i <= j:		#condicion si j es mayor o igual a i
			lista[i], lista[j] = lista[j], lista[i] 	#intercambio de valores 
			i, j = i + 1, j - 1	#intercambio de valores
	Quick(lista, min, j)	#llamado de la funcion
	Quick(lista, i, max)	#llamado de la funcion
	return lista			#retorno de la lista
tmp= Quick(lista, 0, len(lista) - 1) 	#asignacion de la lista a la variable tmp
print tmp #impresion de tmp
fin= time()	#fin del programa
print fin-inicio		#impresion del tiempo 