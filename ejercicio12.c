/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/**
 * Operacion suma digitos
 * 
 * @param numero al cual quermos calcular la suma de sus digitos
 * @return deluelve la suma de sus digitos
 *      (numero = 1234) suma = 1 + 2 + 3 + 4 
 */
int suma_digitos(int numero);

/*
   12. Suma de dígitos
 */

int main()
{
    int numero = 19;
    printf("La sumatoria de %d es: %d", numero, suma_digitos(numero));

    return 0;
}

int suma_digitos(int numero)
{
    int digito;
    int sumatoria = 0;
    while(numero >=1)
    {
        digito = numero%10;
        numero = numero/10;
        sumatoria = sumatoria + digito;
    }
    return sumatoria;
}