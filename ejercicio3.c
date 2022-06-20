/*Escribir un programa que muestre la sumatoria de todos los números entre el 0
y el 100.*/
#include <stdio.h>
int main () {
  int num=0, add=0;
  for (int i=100; i>0;i--) { 
  add+=num;
  num++;
  }
  printf("\nLa suma de los números entre el 0 y el 100 es: %d", add);
  return 0;
}