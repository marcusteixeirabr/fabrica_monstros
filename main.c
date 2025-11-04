#include <stdio.h>

int determinarFamilia(int const *buffer) {
    int wackus = 0, vegitas = 0, spritem = 0;
    for (int i = 1; i < 6; i++) {
        if (buffer[i] == 1) {
            wackus++;
        } else if (buffer[i] == 2) {
            vegitas++;
        } else if (buffer[i] == 3) {
            spritem++;
        }
    }

    printf("\nContagem de características:\n");
    printf("- Wackus  = %d\n", wackus);
    printf("- Vegitas = %d\n", vegitas);
    printf("- Spritem = %d\n", spritem);

    int vencedor;
    if (wackus > vegitas && wackus > spritem) {
        vencedor = 1;
    } else if (vegitas > wackus && vegitas > spritem) {
        vencedor = 2;
    } else if (spritem > wackus && spritem > vegitas) {
        vencedor = 3;
    } else {
        vencedor = buffer[1];
    }
    return vencedor;
}

int lerInteiroValido(char const *buffer, int min, int max) {
    int input;
    printf("%s", buffer);
    do {
        if (scanf("%d", &input) == 1) {
            if (input >= min && input <= max ) {
                return input;
            }
        }
        printf("Opção inválida! Escolha uma opção: ");
        while (getchar() != '\n');
    } while (1);
}

void criarMonstro(int *buffer) {

    printf("============= CRIA NOVO MONSTRO =============\n");
    buffer[0] = lerInteiroValido("Formato da cabeça (1-Franken / 2-Zombos / 3-Happy): ", 1, 3);
    buffer[1] = lerInteiroValido("Formato da olhos (1-Wackus / 2-Vegitas / 3-Spritem): ", 1, 3);
    buffer[2] = lerInteiroValido("Formato da nariz (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
    buffer[3] = lerInteiroValido("Formato da boca (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
    buffer[4] = lerInteiroValido("Formato da cabelo (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
    buffer[5] = lerInteiroValido("Formato da anexo (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
}

void menuPrincipal() {
    printf("\n============ FÁBRICA DE MONSTROS ============\n");
    printf("Sistema de Classificação de Monstros de Zuron\n");
    printf("\n1 - Criar monstro interativamente\n");
    printf("2 - Usar monstro exemplo (Franken Wackus)\n");
    printf("3 - Usar monstro exemplo (Zombos Vegitas)\n");
    printf("4 - Usar monstro exemplo (Happy Spritem)\n");
    printf("0 - Sair\n");
}

int main(void) {
    int monstro[6];
    menuPrincipal();

    do {
        char formatoCabeca[][8] = {"Franken", "Zombos", "Happy"};
        char familia[][8] = {"Wackus", "Vegitas", "Spritem"};

        int const opcao = lerInteiroValido("Escolha uma opção: ", 0, 4);

        switch (opcao) {
            case 1:
                criarMonstro(monstro);
                break;
            case 2:
                for (int i = 0; i < 6; i++) monstro[i] = 1;
                break;
            case 3:
                for (int i = 0; i < 6; i++) monstro[i] = 2;
                break;
            case 4:
                for (int i = 0; i < 6; i++) monstro[i] = 3;
                break;
            case 0:
                printf("\nEncerrando o programa ...\n\n");
                return 0;
            default:
                printf("Opção inválida! ");
                continue;
        }

        int const familiaPredominante = determinarFamilia(monstro);
        printf("\n>>> CLASSIFICAÇÃO: %s %s <<<\n", formatoCabeca[monstro[0] - 1], familia[familiaPredominante - 1] );

        printf("\n==== INSTRUÇÕES PARA DESENHAR O MONSTRO =====\n");
        printf("Passo 1: Desenhe a cabeça formato: %s\n", formatoCabeca[monstro[0] -1]);
        printf("Passo 2: Adicione olhos  tipo: %s\n", familia[monstro[1] - 1]);

        int passo = 3;
        if (monstro[2] != 4) {
            printf("Passo %d: Adicione nariz  tipo: %s\n", passo++, familia[monstro[2] - 1]);
        }
        if (monstro[3] != 4) {
            printf("Passo %d: Adicione boca   tipo: %s\n", passo++, familia[monstro[3] - 1]);
        }
        if (monstro[4] != 4) {
            printf("Passo %d: Adicione cabelo tipo: %s\n", passo++, familia[monstro[4] - 1]);
        }
        if (monstro[5] != 4) {
            printf("Passo %d: Adicione anexo  tipo: %s\n", passo,   familia[monstro[5] - 1]);
        }

        menuPrincipal();

    } while (1);
}
