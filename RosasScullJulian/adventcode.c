#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encontrar_primer_y_ultimo_digito(const char *cadena)
{
    char primer_digito = '\0';
    char ultimo_digito = '\0';

    // Recorrer la cadena
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (isdigit(cadena[i]))
        {
            // Si es el primer dígito, guardarlo
            if (primer_digito == '\0')
            {
                primer_digito = cadena[i];
            }
            // Siempre actualizar el último dígito encontrado
            ultimo_digito = cadena[i];
        }
    }

    // Mostrar resultados
    if (primer_digito != '\0')
    {
        printf("Primer dígito: %c\n", primer_digito);
        printf("Último dígito: %c\n", ultimo_digito);
    }
    else
    {
        printf("No se encontraron dígitos en la cadena.\n");
    }
}

int main()
{
    char cadena[100];

    // Pedir al usuario que ingrese una cadena
    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar el salto de línea que fgets agrega
    cadena[strcspn(cadena, "\n")] = '\0';

    // Llamar a la función para encontrar dígitos
    encontrar_primer_y_ultimo_digito(cadena);

    return 0;
}
