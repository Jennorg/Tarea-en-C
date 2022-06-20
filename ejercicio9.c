/*34.Escribir un programa que, dado un número entero por el usuario (guardado 
como int), muestre la suma de todos sus dígitos*/
#include <stdio.h>
int main (){
  int n,s=0;
 printf("ingrese un numero: "); scanf("%d",&n);
 while (n>0) {
  s=s+n%10;
  n=n/10;
 }
printf("\nla suma de sus digitos es: %d",s);
  return 0;
}