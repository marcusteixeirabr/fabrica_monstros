#include "cores.h"
#include <stdio.h>

void imprimirVermelho(const char* texto) {
    printf("%s%s%s", COR_VERMELHO, texto, COR_RESET);
}

void imprimirVerde(const char* texto) {
    printf("%s%s%s", COR_VERDE, texto, COR_RESET);
}

void imprimirAmarelo(const char* texto) {
    printf("%s%s%s", COR_AMARELO, texto, COR_RESET);
}

void imprimirCiano(const char* texto) {
    printf("%s%s%s", COR_CIANO, texto, COR_RESET);
}

void imprimirTitulo(const char* texto) {
    printf("%s%s%s\n", COR_CIANO, texto, COR_RESET);
}