#include <stdio.h>

int main() {
    char operacion;
    float num1, num2, resultado;

    
    printf("Ingrese la operación que desea realizar (+, -): ");
    scanf("%c", &operacion);

    
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

   
    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;
        default:
            printf("Operación no válida. Por favor, ingrese '+' para suma o '-' para resta.\n");
            break;
    }

    return 0;
}
