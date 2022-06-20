/*Escribir un programa que pregunte al usuario si desea analizar calificaciones
de alumnos y, sólo si responde “S” comenzará el procesamiento de los datos,
hasta que el usuario ingrese algo diferente de “S”. Por cada alumno, permitir
ingresar su calificación. Si es mayor a 4 el alumno está aprobado. Finalmente,
mostrar “Porcentaje de alumnos aprobados: x %” (donde x es el porcentaje de
aprobados sobre el total de calificaciones procesadas). También se debe
imprimir “Promedio de los aprobados: y” (donde y es la calificación promedio,
sólo de los alumnos aprobados).
*/

#include <stdio.h>

int main(void)
{
    char decision;
    float nota, porcentaje, promedio = 0, contador_a = 0, contador = 0;

    printf("Digite S si desea analizar las calificaciones de alumnos: ");
    scanf(" %c", &decision);

    while (decision == 'S' || decision == 's')
    {
        printf("Digite la calificación del alumno: ");
        scanf("%f", &nota);

        if (nota > 4)
        {
            promedio+=nota;
            contador_a++;
        } 
        printf("Si desea continuar digite S: ");
        scanf(" %c", &decision);
        contador++;
    }
    if (promedio>0)
    {
        promedio = promedio/contador_a;
        porcentaje = (contador_a*100)/contador;
    }
    printf("\nPorcentaje de alumnos aprobados: %f%%", porcentaje);
    printf("\nPromedio de alumnos aprobados: %f", promedio);

    return(0);
}