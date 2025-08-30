
/*Realiza un programa que convierta una letra minúscula a mayúscula.*/
#include <stdio.h>

int main() {
    char c;
    printf("Ingrese una letra minuscula: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z') {
        c = c - 32; // diferencia entre minúscula y mayúscula en ASCII
        printf("En mayuscula: %c\n", c);
    } else {
        printf("No es una letra minuscula.\n");
    }
    return 0;
}
