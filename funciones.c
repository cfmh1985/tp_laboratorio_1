/** \brief Suma los dos numeros ingresados por el usuario
 * \param X = primero numero ingresado por el usuario
 * \param Y = segundo numero ingresado por el usuario
 * \return El resultado de la operacion
 */

int suma(int x, int y)
{
 int resultado;
 resultado=x+y;
 printf("\n\n*Resultado: %d*\n", resultado);
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
 printf("\n\n*Resultado: %d*\n", resultado);
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
 printf("\n\n*Resultado: %.2f*\n", resultado);
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
 printf("\n\n*Resultado: %d*\n", resultado);
}

/** \brief Calcula el factorial del numero ingresado por el usuario
 * \param X
 * \return El factorial del numero ingresado
 */
int factorial(int x)
{
 int fact=x, aux=x-1;
 int resultado;
 while(aux>=1)
 {
  fact=fact*aux;
  aux--;
 }
 printf("\n*%d! = %d*\n", x, fact);
}
