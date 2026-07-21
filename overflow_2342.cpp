#include <iostream>

using namespace std;

int main(){
    int limite, num1, num2;
    char operador;
    int resultado;

    cin >> limite;
    cin >> num1 >> operador >> num2;

    if(operador == '*'){
        resultado = num1 * num2;
    }
    if(operador == '+'){
        resultado = num1 + num2;
    }

    if(resultado <= limite){
        cout << "OK" << endl;
    }
    else {
        cout << "OVERFLOW" << endl;
    }
}