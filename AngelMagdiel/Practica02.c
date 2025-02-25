#include <stdio.h>
#include <ctype.h>

void encontrar_digitos(const char *cadena, char *primer_digito, char *ultimo_digito) {
    *primer_digito = '\0';
    *ultimo_digito = '\0';

    int i;  // Declarar 'i' antes del for para compatibilidad con C90
    for (i = 0; cadena[i] != '\0'; i++) {
        if (isdigit((unsigned char)cadena[i])) {
            if (*primer_digito == '\0') {
                *primer_digito = cadena[i];
            }
            *ultimo_digito = cadena[i];
        }
    }
}

int main() {
    char cadena[100];
    char primer_digito, ultimo_digito;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    encontrar_digitos(cadena, &primer_digito, &ultimo_digito);

    if (primer_digito != '\0') {
        printf("Primer dígito: %c\n", primer_digito);
        printf("Último dígito: %c\n", ultimo_digito);
    } else {
        printf("No se encontraron dígitos en la cadena.\n");
    }

    return 0;
}

