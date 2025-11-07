/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 8a Estructuras de Control Repetitivas*/
#include<stdio.h>
#include<math.h>
void main()
{
  int num, pot, res;
  printf("Dame un numero: ");
  scanf("%d", &num);
  printf("Dime el valor que quieres elevar la potencia: ");
  scanf("%d", &pot);
  res=pow(num, pot);
  printf("El resultado es: %d" res);
}
