/*Autor: Oscar Eduardo FLetes Ixta, elavorado el 25/02/222
	Programa que pide grados en celcius y imprime la equivalencia en fahrenheit
	el programa acaba cuando se inserte el numero 9999 
	
	Programa en lenguaje que convierte los grados Celcius a Fahrenheit, con uso del ciclo do-while, scanf, condicones
	y operaciones aritmeticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float, int
		* Uso de scanf
		* Uso del ciclo do-while
		* Operaciones aritemticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, int, uso del scanf, uso del ciclo do-while, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable del tipo float (Celcius)
	El programa pide grados en Celcius y imprime la equivalencia en Fahrenheit, el programa acaba cuando se inserte el numero 9999
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables 
	float c,f;//Variables con decimal
	int i=1;//Variables enteras
	//Entrada
	do{//ciclo do-while
		printf("Introduce la temperatura %d en Celcius: ",i);//imprime mensaje, i cuenta las temperaturas realizadas
		scanf("%f",&c);	//lee el numero insertado por el teclado
		i++;//contador
		if(c!=999){//condicion, si c es diferente de 999
			//Proceso 
			f=(c*9/5)+32;//ecuaciones para convertir grados celcius a Fahrenheit
			//Salida
			printf("El equivalente de Celcius a Fahrenheit es: %.2f\n",f);//imprime la salida de Fahrenheit
		}
	}while(c!=999);//do-while termina cin la misma condicon que if
	return 0;
}
