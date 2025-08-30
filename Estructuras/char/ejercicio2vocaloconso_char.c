/* Crea un programa que determine si un carácter es una vocal o consonante */
#include <stdio.h>

int main() {
    char c;
    printf("Ingrese una letra: ");
    scanf(" %c", &c); // espacio antes de %c evita leer saltos de línea
    
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
        printf("'%c' es una vocal.\n", c);
    } else {
        printf("'%c' es una consonante.\n", c);
    }
    return 0;
}