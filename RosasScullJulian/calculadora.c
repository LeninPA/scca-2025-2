#include <stdio.h>

// Función para realizar la operación
float calcular(float num1, char operador, float num2)
{
    if (operador == '+')
    {
        return num1 + num2;
    }
    else if (operador == '-')
    {
        return num1 - num2;
    }
    else
    {
        printf("Operador no válido. Solo se permite + o -\n");
        return 0;
    }
}

int main()
{
    float resultado;

    // Operación a) 2 + 2
    resultado = calcular(2, '+', 2);
    printf("2 + 2 = %.1f\n", resultado);

    // Operación b) 2 - 3
    resultado = calcular(2, '-', 3);
    printf("2 - 3 = %.1f\n", resultado);

    // Operación c) 2.0 + 2
    resultado = calcular(2.0, '+', 2);
    printf("2.0 + 2 = %.1f\n", resultado);

    return 0;
}
