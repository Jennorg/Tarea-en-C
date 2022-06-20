/* Escribir un programa para solicitar al usuario que ingrese números enteros 
positivos (la cantidad que ingresará no se conoce y la decide el usuario). La 
lectura de números finalizará cuando el usuario ingrese el número -1. Por cada 
número ingresado, mostrar la cantidad de dígitos pares y la cantidad de dígitos 
impares que tiene. Al finalizar, mostrar cuántos números múltiplos de 3 ingresó 
el usuario.*/

#include <stdio.h> 

main(){

    int n=0, par=0, impar=0, mult3=0, auxiliar;
    
    printf("Recuerde que siempre que quiera detener el programa solo tiene que digitar -1");
    printf("\nDigite un número positivo entero: ");
    scanf("%d", &n);

    while(n!=-1)
    {
        if (n>0)
        {
            if(n%3==0)
           {
               mult3++;
           }
           
           par=0;
           impar=0;
           
           while(n>0)
           {
               if(n%2==0)
               {
                   par++;
               }
               else
               {
                   impar++;
               }
               
               n/=10;
           }
           printf("\nDigitos pares: %d", par);
           printf("\nDigitos impares: %d", impar);
        }
        else
        {
            printf ("Por favor, digite un número positivo entero");
        }
                printf("\nDigite un número positivo entero: ");
        scanf("%d", &n);
    }
    
    printf("\nNumeros multiplos de 3 ingresados: %d", mult3);
    
}