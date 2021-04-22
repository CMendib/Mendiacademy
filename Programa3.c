#include <stdio.h>
int main () 
{
     /* Cesar Méndez
    Equipo 1
    21 abr 21
    Programa 3. Pide dos valores reales, calcula promedio y muestra resultado
    */
    float primer, segundo, tercero;
    printf ("\n\n Programa 3");
    printf ("\n\n Saca el promedio de valores reales");
    printf ("\n\n Dame el primer valor real ");
    scanf ("%f",&primer); //Permite capturar un valor real y lo guarda en variable primer
    printf ("\n\n Dame el segundo valor real ");
    scanf ("%f",&segundo); //Permite capturar un valor real y lo guarda en variable primer
    tercero = (primer + segundo)/2;
    printf ("\n El promedio es %f",tercero);
    return 0;
}

