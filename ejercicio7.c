/*.Escribir un programa que permita al usuario ingresar una cantidad de números 
positivos indefinida (la cantidad que ingresará no se conoce y puede cambiar 
en cada ejecución), finalizando cuando ingresa el número 0 (que no se tendrá 
en cuenta). Una vez terminada la lectura de números, informar cuál fue el 
mayor de los números ingresados.*/
#include <stdio.h>
int main (){
  float n=0,mayor=0;
 do {
  printf("\nIntroduzca un numero: "); scanf("%f",&n);
  if (mayor<n) {
    mayor=n;
  }
 } while (n!=0);
  printf("\nel numero mayor fue: %f",mayor);
  return 0;
}