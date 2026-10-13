/*Yañez Perez Michelle
Ejercicio 1 clases
Volumen*/
#include <stdio.h>

int main()
    //Inicio
{
    //Declaracion de variables
    int v, a, b, c;
    //Leer de los valores
    printf("Dame el valor del lado a:");
    scanf("$i",&a);
    printf("Dame el valor del lado b:");
    scanf("&i",&b);
    printf("Dame el valor del lado c:");
    scanf("$i",&c);
    
    //Calcular
    v=a*b*c;
    
    //Imprimir salida
    
    printf("El volumen de la figura es de %i m^3",v);
    
    //Fin
}
