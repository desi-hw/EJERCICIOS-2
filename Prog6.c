/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 6 Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int num=0, suma=0, valor;
  do
  {
    printf("Dame un numero: ");
    scanf("%d", &valor);
    printf("Has introducido el numero %d \n", valor);
    if(valor!=0)
    {
      suma=suma+valor;
      num=num+1;
    }
  }while(valor!=0);
  printf("Finalizado: Se ha introducido el numero 0 \n");
  printf("Suma total: %d \n", suma);
  printf("Total de intentos: %d \n", num);
}
