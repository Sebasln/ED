#include <stdio.h>
#include <stdlib.h>

int main() {
    char caracter;

    printf("Introduce un carácter: ");
    scanf(" %c", &caracter);

    if (caracter >= '0' && caracter <= '9') {
        printf("El carácter '%c' es un número.\n", caracter);
    } else if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')) {
        printf("El carácter '%c' es una letra.\n", caracter);
    } else {
        printf("El carácter '%c' no es ni un número ni una letra.\n", caracter);
    }

    return 0;
}
