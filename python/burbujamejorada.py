from time import time ##libreria para calcular tiempo
inicio= time()		#inicio del programa
lista = [5, 9, 1, 12, 7, 2, 4, 8, 6, 3, 10, 11, 14, 16, 15, 13] #Declaracion del arreglo	
swap=1	#declaracion de variable
j=0		#inicializacion de variable
while swap:	#condicion mientras que swap sea verdadero
	swap= 0		#swap ahora es falso
	j+1		#incremento al valor de j
	for i in range (len(lista)-1):		#ciclo hasta la longitud de lista menos 1	
		if (lista[i] > lista[i + 1]):	#condicion si lista en posicion i es mayor que el siguiente numero 		
			lista[i], lista[i + 1]= lista[i + 1], lista[i] #intercambo de valores
			swap = 1	#swap es verdadero
print lista	#impresion de la lista
fin= time()		#fin del programa
print "Tiempo", fin-inicio	#impresion del tiempo

