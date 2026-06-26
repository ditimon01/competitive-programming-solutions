#include <iostream>
#include <string>
#include <set> /// testar se set ordena strings

using namespace std;

int main() {
    
    int n;
    cin >> n;
    cin.ignore();
    set<string> criancas;
    int contador_comportaram = 0, contador_nao_comportaram = 0;

    string nome;

    for (int i = 0; i < n; i++) {
        getline(cin, nome);

        if (nome[0] == '+') {
            contador_comportaram++;
        }
        else{
            contador_nao_comportaram++;
        }

        nome.erase(0, 2); // como usar; erase(posicao_inicial, quantidade_de_caracteres_a_remover)

        criancas.insert(nome);
    }

    for(auto nome : criancas){
        cout << nome << endl;
    }

    cout << "Se comportaram: " << contador_comportaram << " | Nao se comportaram: " << contador_nao_comportaram << endl;
}