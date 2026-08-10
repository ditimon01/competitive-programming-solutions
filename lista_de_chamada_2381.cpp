#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<string> lista_nomes;
    
    int numero_alunos, numero_sorteado;
    string aluno;

    cin >> numero_alunos >> numero_sorteado;

    for(int i = 0; i < numero_alunos; i++){
        cin >> aluno;
        lista_nomes.push_back(aluno);
    }

    sort(lista_nomes.begin(), lista_nomes.end());

    string aluno_sorteado = lista_nomes[numero_sorteado-1];

    cout << aluno_sorteado << endl;
}