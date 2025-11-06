/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 2 Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int num, par;
  for(num=2; num>0 && num<101; num++)
  {
    if(num % 2 == 0)
        printf("%d \n", num);
  }  
}
