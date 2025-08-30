#include <stdio.h>

enum Semaforo {ROJO, AMARILLO, VERDE};

int main() {
    enum Semaforo estado = AMARILLO;

    printf("Estado del semaforo: ");
    switch (estado) {
        case ROJO: printf("Rojo - Detenerse\n"); break;
        case AMARILLO: printf("Amarillo - Precaucion\n"); break;
        case VERDE: printf("Verde - Avanzar\n"); break;
    }

    return 0;
}
