 /*Mostrar el código ASCII de un carácter*/
#include <stdio.h>

int main() {
    char c;
    printf("Ingrese un caracter: ");
    scanf("%c", &c);
    printf("El codigo ASCII de '%c' es %d\n", c, c);
    return 0;
}

