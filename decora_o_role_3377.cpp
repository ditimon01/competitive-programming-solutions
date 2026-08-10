#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14;

const double limite_inferior = 4 * pi * 12 * 12;
const double limite_superior = 4 * pi * 15 * 15;

const double valor_vermelho = 0.09;
const double valor_azul = 0.07;
const double valor_amarelo = 0.05;


int main(){
    int numero_entradas, area_atual;
    double valor_atual;

    cin >> numero_entradas;

    for(int i = 0; i < numero_entradas; i++){
        cin >> area_atual;
        
        valor_atual = 0;

        if(area_atual < limite_inferior){
            valor_atual = area_atual * valor_vermelho;
            cout << fixed << setprecision(2) << "vermelho = R$ " << valor_atual << endl;
        }
        else if(area_atual >= limite_inferior && area_atual <= limite_superior){
            valor_atual = area_atual * valor_azul;
            cout << fixed << setprecision(2) << "azul = R$ " << valor_atual << endl;
        }
        else{
            valor_atual = area_atual * valor_amarelo;
            cout << fixed << setprecision(2) << "amarelo = R$ " << valor_atual << endl;
        }
    }
}