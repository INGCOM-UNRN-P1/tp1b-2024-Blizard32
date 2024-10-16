/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

#define MULTIPLICADOR_CONVERSOR 1.8
#define SUMA_CONVERSOR 32

/**
 * Operacion cambio de temperatura desde centigrados a fahrenheit
 * 
 * @param centigrados temperatura flotalte en centigrados
 * @return conversion a fahrenheit = (centigrados * 9/5) + 32
 */
float centigrados_a_fahrenheit(float centigrados);

/**
 * Operacion cambio de temperatura desde centigrados a fahrenheit
 * 
 * @param fahrenheit temperatura flotalte en fahrenheit
 * @return conversion a centigrados = (fahrenheit - 32) / 9/5
 */
float fahrenheit_a_centigrados(float fahrenheit);

/*
2. Conversión de temperaturas
 */

int main()
{
    float centigrados;
    float fahrenheit;
    printf("Ingresar centigrados a convertir: ");
    scanf("%f", &centigrados);
    printf("%.2f celcius son %.2f farenheid\n", centigrados, centigrados_a_fahrenheit(centigrados));
    printf("Ingresar fahrenheit a convertir: ");
    scanf("%f", &fahrenheit);
    printf("%.2f fahrenheit son %.2f celcius\n", fahrenheit, fahrenheit_a_centigrados(fahrenheit));
    return 0;
}


float centigrados_a_fahrenheit(float centigrados)
{   
    return (centigrados *MULTIPLICADOR_CONVERSOR)+SUMA_CONVERSOR;
}

float fahrenheit_a_centigrados(float fahrenheit)
{
    return (fahrenheit-SUMA_CONVERSOR)/MULTIPLICADOR_CONVERSOR;
}