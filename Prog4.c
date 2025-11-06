/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 4 Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int num;
  for(num=0; num>0 && num<101; num++)
  {
    num= num % 3 == 0;
    printf("%d \n", num);
  }
}
