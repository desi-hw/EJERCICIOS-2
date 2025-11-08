/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 13 Estructuras de Control Repetitivas*/
#include <stdio.h>
void main() 
{
  int num;
  do 
  {
    printf("Introduce un numero: ");
    scanf("%d", &num);
    if(num <= 0)
      printf("Programa finalizado.\n");
    if(num >= 100)
    {
      if(num % 2 == 0)
        printf("El numero %d es par.\n", num);
      else
        printf("El numero %d es impar.\n", num);
    }
    else
      printf("Debe introducir un número de tres o mas cifras.\n");
  } while(num > 0);
}
