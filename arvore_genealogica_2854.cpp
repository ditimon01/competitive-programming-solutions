#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string, int> id;
int proximo_id = 0;
int contador_familias = 0;

int gerarId(string nome);
void dfs(int atual, const vector<vector<int>>& lista_adj, vector<bool>& visitado);


int main(){
    int num_pessoas, num_relacoes;
    cin >> num_pessoas >> num_relacoes;
    string nome1, relacao, nome2;
    //usar ids (int) para facilitar ao realizar as buscas e trabalhar com a lista de visitados
    int id1, id2;
    vector<vector<int>> lista_adj(num_pessoas);
    vector<bool> visitado(num_pessoas, false);

    for(int i = 0; i < num_relacoes; i++){
        cin >> nome1 >> relacao >> nome2;

        id1 = gerarId(nome1);
        id2 = gerarId(nome2);

        lista_adj[id1].push_back(id2);
        lista_adj[id2].push_back(id1);
    }

    for(int i = 0; i < proximo_id; i++){
        if(!visitado[i]){
            contador_familias++;
            dfs(i, lista_adj, visitado);
        }
        
    }

    int isoladas = num_pessoas - proximo_id;

    contador_familias += isoladas;

    cout << contador_familias << endl;

}


int gerarId(string nome) {

    if(id.find(nome) == id.end()){
        id[nome] = proximo_id++;
    }

    return id[nome];

}


void dfs(int atual, const vector<vector<int>>& lista_adj, vector<bool>& visitado){
    
    visitado[atual] = true;
    for(int i = 0; i < lista_adj[atual].size(); i++){
        int vizinho = lista_adj[atual][i];
        if(!visitado[vizinho])
            dfs(vizinho, lista_adj, visitado);
    }
    
}