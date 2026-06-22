#include <iostream>
#include <vector>
#include <queue> // para implementar fila
#include <string>

using namespace std;

struct Posicao{
    int x,y;
};

int main(){
    int W, H;
    cin >> W >> H;

    vector<string> mapa(H);
    int inicio_x = -1, inicio_y = -1;

    for(int i = 0; i < H; i++){
        cin >> mapa[i];
        size_t achou_P = mapa[i].find('P'); // find vai retornar a posição, o recomendado é usar o size_t
        if(achou_P != string::npos) { //npos é o valor retornado em caso de não encontrar nada no find(), pois size_t não aceita valores negativos
            inicio_x = i;
            inicio_y = achou_P;
        }
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    vector<vector<bool>> visitados(H, vector<bool>(W, false));

    queue<Posicao> fila;

    // adiciona o ponto inicial na fila
    fila.push({inicio_x, inicio_y});
    visitados[inicio_x][inicio_y] = true;

    int ouro_coletado = 0;

    while(!fila.empty()){
        Posicao atual = fila.front();
        fila.pop();

        if(mapa[atual.x][atual.y] == 'G'){
            ouro_coletado++;
        }

        //verificar se os vizinhos possuem armadilhas
        bool sente_brisa = false;
        for(int i = 0; i < 4; i++){
            int vizinho_x = atual.x + dx[i];
            int vizinho_y = atual.y + dy[i];


            if(vizinho_x >= 0 && vizinho_x < H && vizinho_y >= 0 && vizinho_y < W){
                if(mapa[vizinho_x][vizinho_y] == 'T'){
                    sente_brisa = true;
                    break;
                }
            }
        }

        if(sente_brisa){
            continue;
        }

        for(int i = 0; i < 4; i++){
            int vizinho_x = atual.x + dx[i];
            int vizinho_y = atual.y + dy[i];

            if(mapa[vizinho_x][vizinho_y] != '#' && !visitados[vizinho_x][vizinho_y]){
                visitados[vizinho_x][vizinho_y] = true;
                fila.push({vizinho_x, vizinho_y});
            }
        }

    }

    cout << ouro_coletado << endl;    

}
