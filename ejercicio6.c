/*31.Escribir un programa que permita al usuario ingresar 6 números enteros, que 
pueden ser positivos o negativos. Al finalizar, mostrar la sumatoria de los 
números negativos y el promedio de los positivos. No olvides que no es posible 
dividir por cero, por lo que es necesario evitar que el programa arroje un error 
si no se ingresaron números positivos.*/
#include <stdio.h>
int main (){
  int neg=0,pos=0,n=0,j=0;
  for (int i=6;i>0;i--) {
printf("\nIntroduza un numero entero: "); scanf("%d",&n);
if (n>=0) {
  pos+=n;
  j+=1;
} else if (n<0) {
 neg+=n;
}
  }
  if(pos!=0){
  pos/=j;
  }
  printf("\nEl promedio de los positivos es: %d",pos);
  printf("\nLa sumatoria de los negativos es: %d",neg);
  return 0;
}