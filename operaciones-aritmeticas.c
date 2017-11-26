/*
Este codigo se comparte con la finalidad de las personas que recien empiezan a programar en c  puedan aprender algunas cositas que no sepan realizar y no
como finalidad de hacerle la tarea a alguien, favor tomarlo en cuenta.

Sientanse libre de adaptarlo a sus necesidades.

Este codigo NO es 100% elegante, o sea se puede mejorar.

@santoslopez

*/

#include<stdio.h>//libreria necesario para poder imprimir o pedir datos
#include "string.h"//libreria necesario para usar las funciones de cadenas
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /*

  Si los parametros no son 3, el ./operacionesAritmeticas no se toma como un parametro

  */

  if (argc!=3) {
    printf("El formato de ejecucion es incorrecto.\n El formato correcto es:\n");
    printf("santoslopez@harvard:~$ ./operacionesAritmeticas 15 + 4\n");
    printf("santoslopez@harvard:~$ ./operacionesAritmeticas 15 - 4\n");
    printf("santoslopez@harvard:~$ ./operacionesAritmeticas 15 * 4\n");
    printf("santoslopez@harvard:~$ ./operacionesAritmeticas 15 / 4\n");
  }else{
    //recordar en argv[0] es ./operacionesAritmeticas

    

    int primerNumero = atoi(argv[1]);//obtenemos el primer numero, atoi es para convertir la cadena a entero
    int segundoNumero = atoi(argv[2]);//obtenemos el segundo numero

    /*asumir que lo que ingresen en argv[1] y argv[2] son numeros, si fueran letras se toma esto como un numero 0*/
    if ((primerNumero>=1 || primerNumero<=0) && (segundoNumero>=1 || segundoNumero<=0) ) {

      float resultadoSuma = (float) primerNumero + segundoNumero;
      float resultadoResta = (float) primerNumero - segundoNumero;
      float resultadoMultiplicacion = (float) primerNumero * segundoNumero;
      float resultadoDivision = (float) primerNumero / segundoNumero;

      printf("La suma de %i %s %i %s %.5f %s",primerNumero," y ",segundoNumero," es: ",resultadoSuma,"\n");//el .5f es para tomar en cuenta 5 decimales
      printf("La resta de %i %s %i %s %f %s",primerNumero," y ",segundoNumero," es: ",resultadoResta,"\n");
      printf("La multiplicacion de  %i %s %i %s %.2f %s",primerNumero," y ",segundoNumero," es: ",resultadoMultiplicacion,"\n");//.2f es para tomar en cuenta 2 decimales
      printf("La division de %i %s %i %s %.3f %s",primerNumero," y ",segundoNumero," es: ",resultadoDivision,"\n");//el .3f es para tomar en cuenta 3 decimales

    }

  }
  return 0;

}
