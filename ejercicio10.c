/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/**
 * Operacion factorial
 * 
 * @param numero al cual quermos calcular n!
 * @return deluelve el resultado de n!, los productos de todos sus numeros anteriores mayores a 0
 *      (factorial(n) = n * (n-1) * (n-2) * ... * (n-(n-1)))
 */
long factorial(int numero);

/*
   10. Factorial
 */

int main()
{
    int num = 5;
    long result = factorial(num);
    printf("El factorial de %d es: %ld", num, result);

    return 0;
}

long factorial(int numero)
{
    long fact=1;
    if(numero != 0)
    {
        for(int i = numero; i>0; i--)
        {
            fact = fact * i;
        }
    }

    return fact;
}