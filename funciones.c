/*

TP 01-  CALCULADORA
HECHO POR: CARLOS FELIPE M. HENRIQUES
EMAIL: CFMH1985@GMAIL.COM
UTN FRA - TSP
PROGRAMACION/LABORATORIO 01

*/

#include <stdio.h>
#include <stdlib.h>

/** \brief Suma los dos numeros ingresados por el usuario
 * \param X = primero numero ingresado por el usuario
 * \param Y = segundo numero ingresado por el usuario
 * \return El resultado de la operacion
 */

int suma(int x, int y)
{
 int resultado;
 resultado=x+y;
 printf("\nSuma: %d", resultado);
 return resultado;
}

/** \brief Resta el segundo numero ingresado del primero
 * \param X = primero numero ingresado por el usuario
 * \param Y = segundo numero ingresado por el usuario
 * \return El resultado de la operacion
 */
int resta(int x, int y)
{
 int resultado;
 resultado=x-y;
 printf("\nResta: %d", resultado);
 return resultado;
}

/** \brief Divide los 2 numeros ingresados por el usuario
 * \param X = primero numero ingresado por el usuario
 * \param Y = segundo numero ingresado por el usuario
 * \return El resultado de la operacion
 */
int division(int x, int y)
{
 float resultado;
 resultado=x/(float)y;
 printf("\nDivision: %.2f", resultado);
 return resultado;
}

/** \brief Multiplica dos numeros ingresados por el usuario
 * \param X = primero numero ingresado por el usuario
 * \param Y = segundo numero ingresado por el usuario
 * \return El resultado de la operacion
 */
int multiplicacion(int x, int y)
{
 int resultado;
 resultado=x*y;
 printf("\nMultiplicacion: %d", resultado);
 return resultado;
}

/** \brief Calcula el factorial del numero ingresado por el usuario
 * \param X
 * \return El factorial del numero ingresado
 */
int factorial(int x)
{
 int fact=x, aux=x-1;
 if(x==0)
    {
        printf("\n%d! = 1\n");
    }else
    {

        while(aux>=1)
        {
            fact=fact*aux;
            aux--;
        }
            printf("\n%d! = %d\n\n", x, fact);
    }
}
