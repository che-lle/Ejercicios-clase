/*Yañez Perez Michelle
Ejercicio 2 clase
Calcula promedio*/
#include <stdio.h>

void main()
    //Inicio
{
    //Declaracion de variables
    float a,b,c,d,s,p;
    //Leer de las calificaciones 
    printf("Dame la primera calificación:");
    scanf("$f",&a);
    printf("Dame la segunda calificación:");
    scanf("&f",&b);
    printf("Dame la tercera calificación:");
    scanf("$f",&c);
    printf("Dame la cuarta calificación:");
    scanf("$f",&d);
    //Calcular la suma y el promedio 
    s= a+b+c+d;
    p= s/4;
  
    //Imprimir resultadl
    
    printf("El promedio es de %f.\n",p);
    
    //Fin
}
