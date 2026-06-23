#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1415;

int main(){
    int raio, gas_disponivel;
    cin >> raio >> gas_disponivel;

    double volume_balao = (pow(raio, 3) * 4 * PI)/3.0;

    int saida = gas_disponivel/volume_balao;

    cout << saida << endl;

}