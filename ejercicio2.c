/*Escribir un programa que permita saber si un año es bisiesto. Para que un año
sea bisiesto debe ser divisible por 4 y no debe ser divisible por 100, excepto
que también sea divisible por 400.*/

#include <stdio.h> 

int main () {
  int year=0, mod=0,hundred=0,four_hun=0;
  printf("\nIntroduzca un año: "); scanf("%d",&year);
  mod=year%4;
  hundred=year%100;
  four_hun=year%400;

if (mod==0 & hundred!=0 || hundred==0 & four_hun==0) {
printf("\nEs un año bisiesto");
} else 
printf("\nNo es un año bisiesto");
  return 0;
}