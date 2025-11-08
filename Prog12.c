/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 12 Estructuras de Control Repetitivas*/
#include <stdio.h>
void main() 
{
  int secreto = 73, num, intentos = 0;
  printf("Adivina un número entre 1 y 100\n");
  while(intentos < 5) 
  {
    printf("Ingresa un número: ");
    scanf("%d", &num);
    if(num > secreto)
      printf("El número secreto es menor\n");
    else 
      if(num < secreto)
        printf("El número secreto es mayor\n");
    intentos++;
  }
  if(num == secreto)
    printf("\n¡Ganaste! Adivinaste el número en %d intento(s).\n", intentos+1);
  else
    printf("\nPerdiste. No adivinaste el número en 5 intentos.\n");
}
