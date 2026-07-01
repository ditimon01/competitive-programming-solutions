#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;

    int ponto_inicial, num_arestas, num_vertices;
    int origem, destino, total;
    vector<int> nos_unicos;

    for(int i = 0; i < T; i++) {
        nos_unicos.clear();

        cin >> ponto_inicial;

        cin >> num_vertices >> num_arestas;

        for(int j = 0; j < num_arestas; j++){
            cin >> origem >> destino;

            if(origem != ponto_inicial && (find(nos_unicos.begin(), nos_unicos.end(), origem) == nos_unicos.end())){
                nos_unicos.push_back(origem);
            }
            if(destino != ponto_inicial && (find(nos_unicos.begin(), nos_unicos.end(), destino) == nos_unicos.end())){
                nos_unicos.push_back(destino);
            }

        }

        total = nos_unicos.size() * 2;

        cout << total << endl;


    }
}