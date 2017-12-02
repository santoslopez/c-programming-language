// https://www.youtube.com/watch?v=l3zHwJvDubA&index=50&list=PLWtYZ2ejMVJmUTNE2QVaCd1y_6GslOeZ6 en el sitio web fue extraido el ejemplo

//pasar numeros enteros a binarios

#include<stdio.h>

//prototipo
void binario(int numero);

int main(int argc, char const *argv[]) {
  int numero;

  do {
    printf("Ingrese un numero: " );
    scanf("%i",&numero);
  } while(numero<0);
  printf("El numero en binario es: ");
  //mandamos a llamar al metodo para convertir el numero a binario
  binario(numero);
  printf("\n");
  return 0;
}


void binario(int numero){
  //si el numero es mayor a 2 entonces vamos a dividir el numero / 2 y usamos recursividad
  if (numero>1) {
    binario(numero/2);
  }

  // desplegamos el resultado en binario
  printf("%i",numero%2);
}
