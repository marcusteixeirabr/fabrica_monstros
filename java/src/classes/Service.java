package classes;

import java.util.Scanner;

public class Service {

    public static int lerInteiroValido(
            String pergunta,
            int min,
            int max
    ) {
        System.out.print(pergunta);
        do {
            Scanner scanner = new Scanner(System.in);
            try {
                int resposta = scanner.nextInt();
                if (resposta >= min && resposta <= max) {
                    return resposta;
                }
            } catch (Exception e) {
                System.out.print("");
            }
            System.out.println("Opção inválida! Escolha uma opção: ");
        } while (true);
    }

    public static void menuPrincipal(){
        System.out.println("\n============ FÁBRICA DE MONSTROS ============");
        System.out.println("Sistema de Classificação de Monstros de Zuron");
        System.out.println("1 - Criar monstro interativamente");
        System.out.println("2 - Usar monstro exemplo (Franken Wackus)");
        System.out.println("3 - Usar monstro exemplo (Zombos Vegitas)");
        System.out.println("4 - Usar monstro exemplo (Happy Spritem)");
        System.out.println("0 - Sair");
    }

}
