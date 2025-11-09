#include "monstro.h"
#include "cores.h"
#include <stdio.h>

// precisa ser sempre o mesmo nome da função que está na main.c ou em outro arquivo
int lerInteiroValido(const char* mensagem, int min, int max);


void criarMonstro(int* buffer) {
    imprimirCiano("\n----------------------------------------------\n");
    imprimirAmarelo("          CRIACAO DE UM NOVO MONSTRO\n");
    imprimirCiano("----------------------------------------------\n\n");

    const char* perguntas[] = {
        "1) Formato da cabeca:\n   [1] Franken  [2] Zombos  [3] Happy\n> ",
        "2) Tipo dos olhos:\n   [1] Wackus   [2] Vegitas [3] Spritem\n> ",
        "3) Tipo do nariz:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> ",
        "4) Tipo da boca:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> ",
        "5) Tipo do cabelo:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> ",
        "6) Tipo do anexo:\n   [1] Wackus   [2] Vegitas [3] Spritem [4] Nula\n> "
    };

    const int limites[] = { 3, 3, 4, 4, 4, 4 };
    const int totalPerguntas = sizeof(perguntas) / sizeof(perguntas[0]);

    const char* opCabeca[] = { "Franken", "Zombos", "Happy" };
    const char* opOlhos[] = { "Wackus", "Vegitas", "Spritem" };
    const char* opNariz[] = { "Wackus", "Vegitas", "Spritem", "Nula" };
    const char* opBoca[] = { "Wackus", "Vegitas", "Spritem", "Nula" };
    const char* opCabelo[] = { "Wackus", "Vegitas", "Spritem", "Nula" };
    const char* opAnexo[] = { "Wackus", "Vegitas", "Spritem", "Nula" };

    const char** opcoes[] = { opCabeca, opOlhos, opNariz, opBoca, opCabelo, opAnexo };

    for (int i = 0; i < totalPerguntas; i++) {
        buffer[i] = lerInteiroValido(perguntas[i], 1, limites[i]);
    }

    const char* partes[] = {
        "Cabeca", "Olhos", "Nariz", "Boca", "Cabelo", "Anexo"
    };

    imprimirVerde("\nMonstro criado com sucesso!\n");
    imprimirCiano("----------------------------------------------\n");

    for (int i = 0; i < totalPerguntas; i++) {
        printf("%-8s: %s\n", partes[i], opcoes[i][buffer[i] - 1]);
    }

    imprimirCiano("----------------------------------------------\n\n");
}
