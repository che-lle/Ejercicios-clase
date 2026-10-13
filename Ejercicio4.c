/*Yañez Perez Michelle
Ejercicio 4 clase
Calcular promedio*/
#include <stdio.h>

void main()
    //Inicio
{
    //Declaracion de variables
    float s=0,c,p;
    int i;
    
  //Calcular promedio
  for(i=0; i<4; i++);
{
    //leemos calificaciones 
    printf("Ingresa la calificación #i:",(i+1));
    scanf("%f",&c);

    //Calcular la suma
    s=s+c;

}
    //Calcular el promedio
    p= s/i;
  
  //Imprimir salida
    
    printf("El promedio de %i calificaciones es de %f.\n",i,p);
    
    //Fin
}
