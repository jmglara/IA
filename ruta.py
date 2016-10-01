inicio = int(input("Inicio: "))   #SOLICITA EL NUMERO DE INICIO
fin= int(input("Fin: "))		#SOLICITA EL NUMERO DE DESTINO 

M = {	1: [2, 3, 4],				#########################
         2: [1, 3, 5],				#						#
         3: [1, 2, 4,6],			#    MATRIZ DECLARADA	#
         4: [1, 3, 7],				#						#
         5: [2, 6, 8],				#########################
         6: [3, 5, 7, 8],
         7: [4, 6, 8],
         8: [5, 6, 7]
         }

def recorrido(inicio, fin, M, visitados=[]):	# funcion para recorrer el grafo
	visitados = visitados + [inicio]		#ingresando el numero de inicio en el arreglo de visitados

	if inicio == fin:				#comparacion para verificar si el inicio es igual que el final
		return visitados			#regresa la lista de visitados

	elif fin in M[inicio]:				#comparacion para ver si el numero de fin se encuentra en los nodos proximos
		visitados= visitados +[fin]		#se añade el numero final a la lista de visitados 
		return visitados				#regresa la lista de visitados

	for i in M[inicio]:					#ciclo si el valor de i se encuentra en la matriz
		if i not in visitados:			#si el numero no es visitado
			novisitado = recorrido(i, fin, M, visitados)	#se manda a llamar de nuevo la funcion mandando el valor de i como inicial
			return novisitado			#se retorna el valor del nodo no visitado 
			
	return None						#si no entra a ninguna de las anteriores entonces regresa NONE porque no hay camino 
print recorrido(inicio, fin, M)		#imprime el valor retornado de la funcion recorrido