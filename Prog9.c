/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 9 Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int num[10], i, suma=0, mayor, menor;
  float media;
  for (i=0; i<10; i++)
  {
    printf("Dame un numero: ");
    scanf("%d", &num[i]);
    suma=suma+num[i];
  }
  printf("El resultado de la suma es: %d \n", suma);
  media=suma/10;
  printf("El resultado de la media es: %f \n", media);
  mayor=num[0];
  menor=num[0];
  for(i=1; i<10; i++)
  {
    if(num[i]>mayor)
      mayor=num[i];
    if(num[i]<menor)
      menor=num[i];
  }
  printf("El numero mayor es: %d \n", mayor);
  printf("El numero menor es: %d", menor);
}
