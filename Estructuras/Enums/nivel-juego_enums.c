#include <stdio.h>

enum Dificultad {FACIL=1, MEDIO, DIFICIL, EXTREMO};

int main() {
    enum Dificultad nivel = FACIL;

    printf("Nivel de dificultad: ");
    switch (nivel) {
        case FACIL: printf("Facil\n"); break;
        case MEDIO: printf("Medio\n"); break;
        case DIFICIL: printf("Dificil\n"); break;
        case EXTREMO: printf("Extremo\n"); break;
    }

    return 0;
}
