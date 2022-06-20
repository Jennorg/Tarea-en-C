/*Escribir un programa que solicite al usuario el ingreso de tres números
diferentes y muestre en pantalla al mayor de los tres.*/
#include <stdio.h>
int main (){
  float num1,num2,num3;
  printf("\nIntroduzca un numero: "); scanf("%f",&num1);
  printf("\nIntroduzca un numero: "); scanf("%f",&num2);
  printf("\nIntroduzca un numero: "); scanf("%f",&num3);

  if (num1>num2 & num1>num3) {
printf("\nEl numero mayor es: %f",num1);
  } else if (num2>num1 & num2>num3) {
printf("\nEl numero mayor es: %f",num2);
  } else if (num3>num1 & num3>num2) {
printf("\nEl numero mayor es: %f",num3);
  }
  return 0;
}