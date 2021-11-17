Algoritmo Hospital
	Definir price,totalPrice Como Real
	Definir age,option Como Entero
	Escribir 'Edad del paciente: ' Sin Saltar
	Leer age
	Escribir 'Tipo de enfermedades'
	Escribir '1.-Común             $275.80'
	Escribir '2.-Nivel básico      $340.20'
	Escribir '3.-Nivel medio       $567.00'
	Escribir '4.-Nivel Alto        $955.10'
	Escribir 'Ingresa el numero de la opcion del menú: ' Sin Saltar
	Leer option
	Segun option  Hacer
		1:
			price <- 275.80
		2:
			price <- 340.20
		3:
			price <- 567.00
		4:
			price <- 955.10
		De Otro Modo:
			Escribir 'Elije una opción del menu'
	FinSegun
	Si age>=14 Y age<=22 Entonces
		totalPrice <- (price*.15)+price
		Escribir 'El costo total: ',totalPrice
	SiNo
		totalPrice <- price
		Escribir 'El costo total es: ',totalPrice
	FinSi
FinAlgoritmo
