#include<stdio.h>
#include<string.h>
void main()
{
  char usuario[5], contrasena[5];
  int intentos = 0;
  while(intentos < 3)
  {
    printf("Nombre de usuario: ");
    scanf("%s", usuario);
    printf("Contrasena: ");
    scanf("%s", contrasena);
    if (strcmp(usuario, "root") == 0 && strcmp(contrasena, "1234") == 0)
    {
      printf("\nBienvenido al sistema");
      return;
    }
    else
    {
      printf("\nIncorrecto, intente de nuevo \n");
      intentos++;
    }
  }
  printf("\nSe ha superado el numero de intentos");
}
