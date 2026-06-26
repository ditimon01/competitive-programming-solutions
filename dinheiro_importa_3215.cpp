#include <iostream>
#include <vector>

using namespace std;

void dfs(int atual, const vector<vector<int>>& grafo, const vector<int>& dividas, vector<bool>& visitados, long long& saldo);

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> dividas;
    int divida, amigo1, amigo2;

    for(int i = 0; i < n; i++) {
        cin >> divida;
        dividas.push_back(divida);
        
    }

    vector<vector<int>> grafo(n);
    for(int i = 0; i < m; i ++) {
        cin >> amigo1 >> amigo2;
        grafo[amigo1].push_back(amigo2);
        grafo[amigo2].push_back(amigo1);
    }

    vector<bool> visitados(n, false);

    for(int i = 0; i < n; i++) {
        if(!visitados[i]) {
            long long saldo = 0;
            
            dfs(i, grafo, dividas, visitados, saldo);
            

            if(saldo != 0) {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }


        }
    }
  
    cout << "POSSIBLE" << endl;
}

void dfs(int atual, const vector<vector<int>>& grafo, const vector<int>& dividas, vector<bool>& visitados, long long& saldo) {
    visitados[atual] = true;

    saldo += dividas[atual];

    for(int amigo : grafo[atual]) {
        if(!visitados[amigo]) {
            dfs(amigo, grafo, dividas, visitados, saldo);
        }
    }
}