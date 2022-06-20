/*Escribir un programa que, dado un número por el usuario, muestre todos sus
divisores positivos. Recordar que un divisor es aquel que divide al número de
forma exacta (con resto 0).*/
#include <stdio.h>
#include <math.h>
int main (){
  int n=0,div=0;
  printf("\nEscriba un numero: "); scanf("%d",&n);
  div=n;
  for (int i=n;i>0;i--) {
if (n%div==0) {
printf("\n%d",div);
}
div-=1;
  }
  return 0;
}