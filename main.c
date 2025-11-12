#include <stdio.h>
#include "monstro.h"
#include "cores.h"

int main(void) {
    
    
    return 0;
}

int lerInteiroValido(char *pergunta,int min,int max) {
    int input;
    printf("%s",pergunta); // Printa a pergunta
    do {
        if (scanf("%d", &input) == 1) { // Se a escolha do usuario eh um inteiro entao
            if (input >= min && input <= max) { 
                return input;
            }
        }
        printf("Numero fora do intervalo (%d a %d). Tente novamente.\n", min, max);
        while (getchar() != '\n');
    } while (1);
}

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

