/*Escribir un programa que, dado un número entero positivo, calcule y muestre
su factorial. El factorial de un número se obtiene multiplicando todos los
números enteros positivos que hay entre el 1 y ese número. El factorial de 0 es
1*/
#include <stdio.h>
int main (){
  int i=0,num=0,burbuja=1;
  printf("\nIntroduzca un numero: "); scanf("%d",&num);
  if (num<0) {
printf("\nIntroduzca un numero entero positivo");
  }
  else
  {
  for (i=1;i<=num;i++) {
    burbuja*=i;  
  }
  }
  printf("\nEl factorial de %d",num); printf(" es: %d",burbuja);
  return 0;
}