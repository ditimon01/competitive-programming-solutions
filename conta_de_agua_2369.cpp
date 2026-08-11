#include <iostream>

using namespace std;

int main() {
    int consumo, valor;

    cin >> consumo;

    if(consumo <= 10){
        valor = 7;
    }
    else if(consumo <=30){
        valor = 7 + (consumo - 10);
    }
    else if(consumo <=100){
        valor = 7 + 20 + 2*(consumo - 30);
    }
    else{
        valor = 7 + 20 + 140 + 5*(consumo - 100);
    }

    cout << valor << endl;
}