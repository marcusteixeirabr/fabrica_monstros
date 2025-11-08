package classes;

public class Monstro {
    private final String[] formatoCabeca = {"Franken", "Zombos", "Happy"};
    private final String[] tipoFamilia = {"Wacrus", "Vegitas", "Spritem", "Nula"};
    private String cabeca;
    private String olhos;
    private String nariz;
    private String boca;
    private String cabelo;
    private String anexo;
    private String familia;

    public Monstro(int[] caracteristicas) {
        setCabeca(formatoCabeca[caracteristicas[0] - 1]);
        setOlhos(tipoFamilia[caracteristicas[1] - 1]);
        setNariz(tipoFamilia[caracteristicas[2] - 1]);
        setBoca(tipoFamilia[caracteristicas[3] - 1]);
        setCabelo(tipoFamilia[caracteristicas[4] - 1]);
        setAnexo(tipoFamilia[caracteristicas[5] - 1]);
        setFamilia(caracteristicas);
    }

    public String getCabeca() {
        return cabeca;
    }

    public String getOlhos() {
        return olhos;
    }

    public String getNariz() {
        return nariz;
    }

    public String getBoca() {
        return boca;
    }

    public String getCabelo() {
        return cabelo;
    }

    public String getAnexo() {
        return anexo;
    }

    public String getFamilia() {
        return familia;
    }

    public void setCabeca(String cabeca) {
        this.cabeca = cabeca;
    }

    public void setOlhos(String olhos) {
        this.olhos = olhos;
    }

    public void setNariz(String nariz) {
        this.nariz = nariz;
    }

    public void setBoca(String boca) {
        this.boca = boca;
    }

    public void setCabelo(String cabelo) {
        this.cabelo = cabelo;
    }

    public void setAnexo(String anexo) {
        this.anexo = anexo;
    }

    public void setFamilia(int[] caracteristicas) {
        int wackus = 0, vegitas = 0, spritem = 0;
        for (int i = 1; i < 6; i++) {
            switch (caracteristicas[i]) {
                case 1 -> wackus++;
                case 2 -> vegitas++;
                case 3 -> spritem++;
            }
        }

        System.out.println("\nContagem de características:");
        System.out.println("- Wacrus = " + wackus);
        System.out.println("- Vegitas = " + vegitas);
        System.out.println("- Spritem = " + spritem);

        int vencedor;

        if (wackus > vegitas && wackus > spritem) {
            vencedor = 1;
        } else if (vegitas > wackus && vegitas > spritem) {
            vencedor = 2;
        } else if (spritem > wackus && spritem > vegitas) {
            vencedor = 3;
        } else {
            vencedor = caracteristicas[1];
        }

        familia = tipoFamilia[vencedor - 1];
    }
}
