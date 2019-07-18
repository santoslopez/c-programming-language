#include <stdlib.h>
#include <string.h>
#include <stdio.h>


//estructuras: forma de guardar muchas variables en una
struct alumno
{
	char nombre[40];
	int fechaNacimiento;
};


int main(void){
	
	int yearNow = 2019;
	struct alumno al;

	al.fechaNacimiento = 1993; 

	char nombreTemporal[] = "The Santos Crimson";

	//pasamos el valor de charTemporal al char del struct
	strcpy(al.nombre,nombreTemporal);


	printf("%s %s %i\n", al.nombre," su edad es: ",yearNow-al.fechaNacimiento);

	return 0;

}