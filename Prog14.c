/*Huitrón Was-Szabo Elizabeth Desireé
Ejercicio 14 Estructuras de Control Repetitivas*/
#include <stdio.h>
int main() 
{
  int cantidad = 1; 
  float precio, total = 0;
  while(cantidad != 0) 
  {
    printf("Cantidad vendida (0 para terminar): ");
    scanf("%d", &cantidad);
    if(cantidad > 0) 
    {
      printf("Precio unitario: ");
      scanf("%f", &precio);
      if(precio > 0) 
        total = total + (cantidad * precio);
      else 
        printf("El precio debe ser positivo.\n");
   }
   else
   {
     if(cantidad < 0)
    printf("La cantidad debe ser positiva.\n");
   }
   printf("\nImporte total de la factura: %.2f\n", total);
   }
}
