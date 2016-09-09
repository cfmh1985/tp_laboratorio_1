/*
UTN FRA - TSP
PROGRAMACION/LABORATORIO 01
TP 01-  CALCULADORA
PROGRAMADOR: CARLOS FELIPE M. HENRIQUES
EMAIL: CFMH1985@GMAIL.COM
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
 int x=0, y=0;
 int opcion;
 int contX=0;
 int contY=0;
 char rta = 's';

 do
 {
  system("cls");
  printf("\n***Calculadora - TP 01***\n\n");
  printf("1 - Ingresar primer operando (A=%d)\n", x);
  printf("2 - Ingresar segundo operando (B=%d)\n", y);
  printf("3 - Suma (A+B)\n");
  printf("4 - Resta (A-B)\n");
  printf("5 - Division (A/B)\n");
  printf("6 - Multiplicacion (A*B)\n");
  printf("7 - Factorial (A!)\n");
  printf("8 - Resultado de todas las operaciones\n");
  printf("9 - Salir\n\n");

  printf("\nSeleccione una opcion: \n");
  scanf("%d", &opcion);

  while(opcion>9 || opcion<1)
  {
    printf("\nERROR! Seleccione una opcion valida (1-9): \n");
    scanf("%d", &opcion);
  }
              switch(opcion)
              {
               case 1:
                    printf("\nIngrese el primer operando: ");
                    scanf("%d", &x);
                    contX++;
                    break;

               case 2:
                    printf("\nIngrese el segundo operando: ");
                    scanf("%d", &y);
                    contY++;
                    break;

               case 3:
                      if(contX==0 && contY==0)
                      {
                          printf("\nERROR! Debe ingresar ambos operandos (A y B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if (contX==0)
                      {
                          printf("\nERROR! Debe ingresar el primer operando (A) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if(contY==0)
                      {
                          printf("\nERROR! Debe ingresar el segundo operando(B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }
                    suma(x, y);
                    system("pause");
                    break;
               case 4:
                    if(contX==0 && contY==0)
                      {
                          printf("\nERROR! Debe ingresar ambos operandos (A y B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if (contX==0)
                      {
                          printf("\nERROR! Debe ingresar el primer operando (A) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if(contY==0)
                      {
                          printf("\nERROR! Debe ingresar el segundo operando(B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }
                    resta(x, y);
                    system("pause");
                    break;

               case 5:
                    if(contX==0 && contY==0)
                      {
                          printf("\nERROR! Debe ingresar ambos operandos (A y B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if (contX==0)
                      {
                          printf("\nERROR! Debe ingresar el primer operando (A) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if(contY==0)
                      {
                          printf("\nERROR! Debe ingresar el segundo operando(B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }
                    while(y==0)
                    {
                     printf("\nERROR! No se puede dividir por 0 (cero). Favor ingresar otro divisor: ");
                     scanf("%d", &y);
                    }
                    division(x, y);
                    system("pause");
                    break;

               case 6:
                    if(contX==0 && contY==0)
                      {
                          printf("\nERROR! Debe ingresar ambos operandos (A y B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if (contX==0)
                      {
                          printf("\nERROR! Debe ingresar el primer operando (A) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if(contY==0)
                      {
                          printf("\nERROR! Debe ingresar el segundo operando(B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }
                    multiplicacion(x, y);
                    system("pause");
                    break;

               case 7:
                      if (contX==0)
                      {
                          printf("\nERROR! Debe ingresar el operando (A) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }
                    factorial(x);
                    printf("\n");
                    system("pause");
                    break;

               case 8:
                    if(contX==0 && contY==0)
                      {
                          printf("\nERROR! Debe ingresar ambos operandos (A y B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if (contX==0)
                      {
                          printf("\nERROR! Debe ingresar el primer operando (A) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }else if(contY==0)
                      {
                          printf("\nERROR! Debe ingresar el segundo operando(B) para que se pueda calcular!\n");
                          system("pause");
                          break;
                      }
               printf("\nResultado de todas las operaciones:\n");
               printf("\nA=%d y B=%d\n", x, y);
               printf("\n", suma(x, y));
               printf("\n", resta(x, y));
               printf("\n", division(x, y));
               printf("\n", multiplicacion(x, y));
               printf("\n", factorial(x));
               system("pause");
               break;

               case 9:
                    rta='n';
                    break;
              }
 }while(rta=='s');

 system("pause");
 return 0;
}
