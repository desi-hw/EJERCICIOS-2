/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 5 Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int n,num=5, s;
  do
  {
    printf("Dame un numero: ");
    scanf("%d", &n);
  } while(n <= 0);
  for(s=1; s <= n; s++)
  {
    printf("%d\n", num);
    num=num+5;
  }
}
