#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
 int x, y;
 int opcion;
 int resultado;
 char rta = 's';

 do
 {
  system("cls");
  printf("\n***Calculadora - TP 01***\n\n");
  printf("1 - Suma (A+B)\n");
  printf("2 - Resta (A-B)\n");
  printf("3 - Division (A/B)\n");
  printf("4 - Multiplicacion (A*B)\n");
  printf("5 - Factorial (A!)\n");
  printf("6 - Salir\n\n");

  printf("\nSeleccione una opcion: \n");
  scanf("%d", &opcion);

  while(opcion>6)
  {
    printf("\nERROR! Seleccione una opcion valida (1-6): \n");
    scanf("%d", &opcion);
  }

              switch(opcion)
              {
               case 1:
                    printf("\nIngrese el primer numero: ");
                    scanf("%d", &x);
                    printf("A=%d", x);
                    printf("\nIngrese el segundo numero: ");
                    scanf("%d", &y);
                    printf("B=%d", y);
                    suma(x, y);
                    system("pause");
                    break;
               case 2:
                    printf("\nIngrese el primer numero: ");
                    scanf("%d", &x);
                    printf("A=%d", x);
                    printf("\nIngrese el segundo numero: ");
                    scanf("%d", &y);
                    printf("B=%d", y);
                    resta(x, y);
                    system("pause");
                    break;
               case 3:
                    printf("\nIngrese el primer numero: ");
                    scanf("%d", &x);
                    printf("A=%d", x);
                    printf("\nIngrese el segundo numero: ");
                    scanf("%d", &y);
                    printf("B=%d", y);

                    while(y==0)
                    {
                     printf("\nERROR! No se puede dividir por 0 (cero). Favor ingresar otro divisor: ");
                     scanf("%d", &y);
                    }

                    division(x, y);
                    system("pause");
                    break;
               case 4:
                    printf("\nIngrese el primer numero: ");
                    scanf("%d", &x);
                    printf("A=%d", x);
                    printf("\nIngrese el segundo numero: ");
                    scanf("%d", &y);
                    printf("B=%d", y);
                    multiplicacion(x, y);
                    system("pause");
                    break;
               case 5:
                    printf("\nIngrese un numero: ");
                    scanf("%d", &x);
                    factorial(x);
                    printf("\n");
                    system("pause");
                    break;
               case 6:
                    rta='n';
                    break;
              }
 }while(rta=='s');

 system("pause");
 return 0;
}
