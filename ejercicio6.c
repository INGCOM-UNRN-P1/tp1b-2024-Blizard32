/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

#define COMIENZO_CONTADOR 0 //se utiliza para comenzar un contador desde 0

/**
 * Operacion cociente lento
 * 
 * @param dividendo numero al que queremos dividir 
 * @param divisor numero divisor ¡DIFERENTE a 0!
 * @return cociente (parte entera del resultado) de @param dividendo / @param divisor
 */
int cociente_lento(int dividendo, int divisor);


/**
 * Operacion resto lento
 * 
 * @param dividendo numero al que queremos dividir 
 * @param divisor numero divisor ¡DIFERENTE a 0!
 * @return resto (parte entera del resultado) de @param dividendo / @param divisor
 */
int resto_lento(int dividendo, int divisor);


/**
 * Operacion dividir
 * 
 * @param dividendo numero al que queremos dividir 
 * @param divisor numero divisor ¡DIFERENTE a 0!
 * @return resultado de la operación de @param dividendo / @param divisor como numero flotante
 */
float dividir(int dividendo, int divisor);

/*
    6. Divisiones
*/

int main()
{
    int num1;
    int num2;
    printf("Ingrese numero: ");
    scanf("%d", &num1);
    printf("Ingrese numero: ");
    scanf("%d", &num2);
    printf("%d/%d = %f\n", num1, num2, dividir(num1, num2));
    return 0;
}

int cociente_lento(int dividendo, int divisor)
{
    int cociente = COMIENZO_CONTADOR;
    dividendo = dividendo - divisor;
    while(dividendo >= 1)
    {
        dividendo = dividendo - divisor;
        cociente++;
    }
    return cociente;
}

int resto_lento(int dividendo, int divisor)
{
    int resto = dividendo - (divisor*cociente_lento(dividendo, divisor));
    return resto;
}

float dividir(int dividendo, int divisor)
{
    int resto = dividendo - (divisor*cociente_lento(dividendo, divisor));
    int decimales = 0;
    while(resto != 0)
    {
        if(resto<divisor)
        {
            resto = resto * 10;
            decimales = decimales * 10;
        }
        resto = resto - divisor;
        decimales++;
    }
    float resultado = decimales;
    while(resultado>=1)
    {
        resultado = resultado * 0.1;
    }
    return resultado + cociente_lento(dividendo, divisor);
}
