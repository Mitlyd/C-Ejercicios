#include <stdio.h>

enum Colores {MORADO, VERDE, ROSADO, AMARILLO, NEGRO};

int main() {
    for (int i = MORADO; i <= NEGRO; i++) {
        printf("Valor %d: ", i);
        switch (i) {
            case MORADO: printf("Morado\n"); break;
            case VERDE: printf("Verde\n"); break;
            case ROSADO: printf("Rosado\n"); break;
            case AMARILLO: printf("Amarillo\n"); break;
            case NEGRO: printf("Negro\n"); break;
        }
    }
    return 0;
}
