package classes;

import static classes.Service.*;

public class RetratoFalado {

    public RetratoFalado() {
        int opcao;
        do {
            menuPrincipal();
            opcao = lerInteiroValido("Escolha uma opção: ", 0, 4);
            if (opcao == 0) {
                System.out.println("\nEncerrando o programa ...");
                break;
            }
            int[] caracteristicas = criarMonstro(opcao);
            Monstro monstro = new Monstro(caracteristicas);
            saidaDados(monstro);

        } while (true);
    }

    public int[] criarMonstro(int opcao) {
        int[] caracteristicas = {0, 0, 0, 0, 0, 0};
        switch (opcao) {
            case 1-> {
                System.out.println("\n============= CRIA NOVO MONSTRO =============");
                caracteristicas[0] = lerInteiroValido("Formato da cabeça (1-Franken / 2-Zombos / 3-Happy): ", 1, 3);
                caracteristicas[1] = lerInteiroValido("Formato da olhos (1-Wackus / 2-Vegitas / 3-Spritem): ", 1, 3);
                caracteristicas[2] = lerInteiroValido("Formato da nariz (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
                caracteristicas[3] = lerInteiroValido("Formato da boca (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
                caracteristicas[4] = lerInteiroValido("Formato da cabelo (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
                caracteristicas[5] = lerInteiroValido("Formato da anexo (1-Wackus / 2-Vegitas / 3-Spritem / 4-Nula): ", 1, 4);
            }
            case 2 -> { for (int i = 0; i < 6; i++) caracteristicas[i] = 1; }
            case 3 -> { for (int i = 0; i < 6; i++) caracteristicas[i] = 2; }
            case 4 -> { for (int i = 0; i < 6; i++) caracteristicas[i] = 3; }
            }
        return caracteristicas;
    }

    public void saidaDados(Monstro m) {
        System.out.println("\n>>> Classificação: " + m.getCabeca() + " " + m.getFamilia() + " <<<\n");
        System.out.println("==== INSTRUÇÕES PARA DESENHAR O MONSTRO =====");
        System.out.println("Passo 1: Desenhe a cabeça formato: " + m.getCabeca());
        System.out.println("Passo 2: Adicione olhos  tipo: " + m.getOlhos());

        int passo = 3;

        if (!m.getNariz().equalsIgnoreCase("Nula")) {
            System.out.println("Passo " + passo++ + ": Adicione nariz tipo: " + m.getNariz());
        }
        if (!m.getBoca().equalsIgnoreCase("Nula")) {
            System.out.println("Passo " + passo++ + ": Adicione boca tipo: " + m.getBoca());
        }
        if (!m.getCabelo().equalsIgnoreCase("Nula")) {
            System.out.println("Passo " + passo++ + ": Adicione cabelo tipo: " + m.getCabelo());
        }
        if (!m.getAnexo().equalsIgnoreCase("Nula")) {
            System.out.println("Passo " + passo + ": Adicione anexo tipo: " + m.getAnexo());
        }
    }
}
