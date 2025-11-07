/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 10 Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int i, num[10], suma=0;
  for(i=0; i<10; i++)
  {
    printf("Dame un numero: ");
    scanf("%d", &num[i]);
    suma=suma+num[i];
    if(suma>100)
    {
      printf("Su suma es mayor a 100");
      return;
    }
  } 
  printf("Se han introducido 10 numeros");
}
