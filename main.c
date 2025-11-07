#include <stdio.h>

int main(void) {

    return 0;
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
