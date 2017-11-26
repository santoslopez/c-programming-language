//averiguamos cuantos bytes tienen los tipos de datos en c (char, int, long, float, double y void)

#include<stdio.h>
#include<stdlib.h> //para usar malloc

//prototipos
int main(void);

int main(void){
  //con sizeof(tipo) averiguamos cuantos bytes tiene el tipo de dato
  int bytesEntero = sizeof(int);
  int byteChar = sizeof(char);
  int bytesLong = sizeof(long);
  int bytesFloat = sizeof(float);
  int bytesDouble = sizeof(double);
  //int bytesVoid = sizeof(void);


  //imprmimos el tamano de bytes de los tipos en C
  printf("El tipo char ocupa %i %s", byteChar," bytes\n");
  printf("El tipo int ocupa %i %s", bytesEntero," bytes\n");
  printf("El tipo long o long int ocupa %i %s", bytesLong," bytes, anque depende del ordenador\n");
  printf("El tipo float ocupa %i %s", bytesFloat," bytes\n");
  printf("El double float ocupa %i %s", bytesDouble," bytes\n");
  //printf("El tipo void ocupa %i %s", bytesVoid," bytes\n");

  return 0;
}
