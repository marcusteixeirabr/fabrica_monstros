#include <iostream>
#include <string>
#include <map>
using namespace std;

// Estrutura para representar um monstro
struct Monstro {
    string formatoCabeca;
    string tipoOlhos;
    string tipoBoca;
    string tipoNariz;
    string tipoAnexo;
    string tipoCabelo;
};

// Função para contar características de cada família
map<string, int> contarCaracteristicas(const Monstro& m) {
    map<string, int> contagem = {
        {"Vegitas", 0},
        {"Wackus", 0},
        {"Spritem", 0}
    };

    // Contar características (exceto cabeça e valores nulos)
    if (m.tipoOlhos != "nula" && m.tipoOlhos != "") {
        contagem[m.tipoOlhos]++;
    }
    if (m.tipoBoca != "nula" && m.tipoBoca != "") {
        contagem[m.tipoBoca]++;
    }
    if (m.tipoNariz != "nula" && m.tipoNariz != "") {
        contagem[m.tipoNariz]++;
    }
    if (m.tipoAnexo != "nula" && m.tipoAnexo != "") {
        contagem[m.tipoAnexo]++;
    }
    if (m.tipoCabelo != "nula" && m.tipoCabelo != "") {
        contagem[m.tipoCabelo]++;
    }

    return contagem;
}

// Função para determinar a família predominante
string determinarFamilia(const Monstro& m) {
    map<string, int> contagem = contarCaracteristicas(m);

    int maxCount = 0;
    string familiaPredominante = "";
    int familiaEmpate = 0;

    // Encontrar a família com mais características
    for (const auto& par : contagem) {
        if (par.second > maxCount) {
            maxCount = par.second;
            familiaPredominante = par.first;
            familiaEmpate = 1;
        } else if (par.second == maxCount && par.second > 0) {
            familiaEmpate++;
        }
    }

    // Regra: em caso de empate, usar a família dos olhos
    if (familiaEmpate > 1) {
        familiaPredominante = m.tipoOlhos;
    }

    return familiaPredominante;
}

// Função para classificar o monstro
string classificarMonstro(const Monstro& m) {
    string familiaPredominante = determinarFamilia(m);
    return m.formatoCabeca + " " + familiaPredominante;
}

// Procedimento para desenhar/descrever o monstro passo a passo
void desenharMonstro(const Monstro& m) {
    cout << "\n===== INSTRUÇÕES PARA DESENHAR O MONSTRO =====" << endl;
    cout << "Passo 1: Desenhe a cabeça formato: " << m.formatoCabeca << endl;
    cout << "Passo 2: Adicione olhos   tipo: " << m.tipoOlhos << endl;

    int passo = 3;
    if (m.tipoNariz != "nula" && m.tipoNariz != "") {
        cout << "Passo " << passo++ << ": Adicione nariz   tipo: " << m.tipoNariz << endl;
    }
    if (m.tipoBoca != "nula" && m.tipoBoca != "") {
        cout << "Passo " << passo++ << ": Adicione boca    tipo: " << m.tipoBoca << endl;
    }
    if (m.tipoCabelo != "nula" && m.tipoCabelo != "") {
        cout << "Passo " << passo++ << ": Adicione antenas tipo: " << m.tipoCabelo << endl;
    }
    if (m.tipoAnexo != "nula" && m.tipoAnexo != "") {
        cout << "Passo " << passo << ": Adicione orelhas tipo: " << m.tipoAnexo << endl;
    }
    cout << "==============================================" << endl;
}

// Função para exibir o menu e criar monstro interativamente
Monstro criarMonstro() {
    Monstro m;

    cout << "\n============= CRIA NOVO MONSTRO =============" << endl;

    cout << "Formato da cabeça (Zombos/Franken/Happy): ";
    cin >> m.formatoCabeca;

    cout << "Tipo dos olhos (Vegitas/Wackus/Spritem/nula): ";
    cin >> m.tipoOlhos;

    cout << "Tipo da boca (Vegitas/Wackus/Spritem/nula): ";
    cin >> m.tipoBoca;

    cout << "Tipo do nariz (Vegitas/Wackus/Spritem/nula): ";
    cin >> m.tipoNariz;

    cout << "Tipo das orelhas (Vegitas/Wackus/Spritem/nula): ";
    cin >> m.tipoAnexo;

    cout << "Tipo das antenas (Vegitas/Wackus/Spritem/nula): ";
    cin >> m.tipoCabelo;

    return m;
}

int main() {
    cout << "============ FÁBRICA DE MONSTROS ============" << endl;
    cout << "Sistema de Classificação de Monstros de Zuron" << endl;

    int opcao;
    do {
        cout << "\n1 - Criar monstro interativamente" << endl;
        cout << "2 - Usar monstro exemplo (Franken Wackus)" << endl;
        cout << "3 - Usar monstro exemplo (Zombos Vegitas)" << endl;
        cout << "4 - Usar monstro exemplo (Happy Vegitas)" << endl;
        cout << "0 - Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        Monstro monstro;

        switch(opcao) {
            case 1:
                monstro = criarMonstro();
                break;
            case 2:
                // Exemplo: Franken Wackus
                monstro.formatoCabeca = "Franken";
                monstro.tipoOlhos = "Wackus";
                monstro.tipoNariz = "Wackus";
                monstro.tipoBoca = "Wackus";
                monstro.tipoCabelo = "Wackus";
                monstro.tipoAnexo = "Spritem";
                break;
            case 3:
                // Exemplo: Zombos Vegitas
                monstro.formatoCabeca = "Zombos";
                monstro.tipoOlhos = "Vegitas";
                monstro.tipoNariz = "Vegitas";
                monstro.tipoBoca = "Vegitas";
                monstro.tipoCabelo = "nula";
                monstro.tipoAnexo = "Wackus";
                break;
            case 4:
                // Exemplo: Happy Stritem
                monstro.formatoCabeca = "Happy";
                monstro.tipoOlhos = "Spritem";
                monstro.tipoNariz = "Spritem";
                monstro.tipoBoca = "Spritem";
                monstro.tipoCabelo = "Spritem";
                monstro.tipoAnexo = "Wackus";
                break;
            case 0:
                cout << "Encerrando programa..." << endl;
                return 0;
            default:
                cout << "Opção inválida!" << endl;
                continue;
        }

        // Classificar e exibir o monstro
        string classificacao = classificarMonstro(monstro);
        cout << "\n>>> CLASSIFICAÇÃO: " << classificacao << " <<<" << endl;

        // Exibir contagem de características
        map<string, int> contagem = contarCaracteristicas(monstro);
        cout << "\nContagem de características:" << endl;
        cout << "- Vegitas: " << contagem["Vegitas"] << endl;
        cout << "- Wackus: " << contagem["Wackus"] << endl;
        cout << "- Spritem: " << contagem["Spritem"] << endl;

        // Desenhar o monstro
        desenharMonstro(monstro);

    } while(opcao != 0);

    return 0;
}