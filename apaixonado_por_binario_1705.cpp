#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

void encontrar_binario(long long numero);

int main() {
    long long numero;
    while(cin >> numero) {
        encontrar_binario(numero);
    }
}

void encontrar_binario(long long numero) {
    queue<long long> fila;

    fila.push(1);

    while (!fila.empty()){
        long long atual = fila.front();
        fila.pop();

        if(atual >= pow(10,12)) continue;
        
        if (atual % numero == 0) {
            cout << atual << endl;
            return;
        }

        fila.push(atual * 10);
        fila.push(atual * 10 + 1);

    }

    cout << -1 << endl;
}