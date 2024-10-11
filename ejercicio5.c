/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

#define COMIENZO_CONTADOR 0 //se utiliza para comenzar un contador desde 0

/**
 * Operacion suma lenta
 * 
 * @param sumando numero de partida
 * @param sumador cantidad de veces sumadas
 * @return la suma entre ambos numeros
 */
int suma_lenta(int sumando, int sumador);

/**
 * Operacion modulo de numero
 * 
 * @param numero numero a medir
 * @return distancia entre el numero y 0
 */
int modulo_de_numero(int numero);

/*
    5. Suma lenta
*/

int main()
{
    int num1;
    int num2;
    printf("Ingrese numero: ");
    scanf("%d", &num1);
    printf("Ingrese numero a sumar: ");
    scanf("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, suma_lenta(num1, num2));
    return 0;
}


int modulo_de_numero(int numero)
{
    if(numero < 0)
    {
        numero = numero * (-1);
    }
    return numero;
}


int suma_lenta(int sumando, int sumador)
{
    int contador = COMIENZO_CONTADOR;
    while(contador != modulo_de_numero(sumador))
    {
        if(sumador > 0) //check si se suma o resta
        {
            sumando ++;
        }
        else
        {
            sumando --;
        }
        contador ++;
    }
    return sumando; 
}