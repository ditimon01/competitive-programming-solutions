#include <iostream>

int DivisorComum(int x, int y);

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int denominador = b * d;
    int numerador = a * d + c * b;

    int divisor = DivisorComum(numerador, denominador);

    while(divisor != 1) {
        numerador = numerador/divisor;
        denominador = denominador/divisor;
        divisor = DivisorComum(numerador, denominador);
    }

    std::cout << numerador << " " << denominador << std::endl;
}

int DivisorComum(int x, int y) {
    for (int i = 2; i <= std::min(x,y); i++) {
        if(x%i == 0 && y%i == 0) {
            return i;
        }    
    }
    return 1;
}