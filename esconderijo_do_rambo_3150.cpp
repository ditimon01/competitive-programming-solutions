#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int numero_pontos, quantidade_caminhos;
    cin >> numero_pontos >> quantidade_caminhos;

    vector<int> numero_conexoes;
    for (int i = 0; i < numero_pontos ; i++){
        numero_conexoes.push_back(0);
    }

    int x,y;

    for (int i = 0; i < quantidade_caminhos; i++) {
        cin >> x >> y;
        numero_conexoes[x]++;
        numero_conexoes[y]++;
    }

    string saida = "Rambo esta salvo";

    for(int i = 0; i < numero_pontos; i++){
        if(numero_conexoes[i] == 0 || numero_conexoes[i]%2 == 1){
            saida = "Rambo esta perdido";
            break;
        }
    }

    cout << saida << endl;

}