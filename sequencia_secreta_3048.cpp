#include <iostream>
#include <vector>

using namespace std;

int main() {
    int quantidade_numeros, num, numero_circulos = 0, ultimo_numero = -1;
    vector<int> numeros;

    cin >> quantidade_numeros;

    for (int i = 0; i < quantidade_numeros; i++) {
        cin >> num;
        numeros.push_back(num);

        if(num != ultimo_numero){
            numero_circulos++;
            ultimo_numero = num;
        }

    }
    cout << numero_circulos << endl;
}