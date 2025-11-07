/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 8b Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int num, pot, res=1, i;
  printf("Dame un numero: ");
  scanf("%d", &num);
  printf("Dame un valor para la potencia: ");
  scanf("%d", &pot);
  for(i = 1; i <= pot; i++) 
  {
    res= res*num;
  }
  printf("El resultado es: %d", res);
}
