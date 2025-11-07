/*Huitrón Was-Szabo Elizabeth Desireé 
Ejercicio 11 Estructuras de Control Repetitivas*/
#include<stdio.h>
void main()
{
  int secreto=73, num, intentos=0;
  printf("Adivina un numero entre el 1 y 100");
  do
  {
    printf("Ingresa un numero: ");
    scanf("%d", &num);
    if(num>secreto)
      printf("El numero secreto es menor \n");
    if(num<secreto)
      printf("El numero secreto es mayor \n");
    intentos++;
  }while(num!=secreto);
  if(intentos<5)
    printf("Enhorabuena\n");
  if(intentos>=5 && intentos<=10)
    printf("No esta mal \n");
  else
    printf("Debes practicar mas \n");
  printf("El numero de intentos fue: %d", intentos);
}
