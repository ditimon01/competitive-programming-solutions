#include <iostream> 
#include <cmath>

int main() {
    int xf, yf, xi, yi, vi, r1, r2;
    while(std::cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2) {
        double distancia_inicial = std::sqrt(std::pow(xi - xf, 2) + std::pow(yi - yf, 2));

        double alcance_ultimate = r1 + r2;

        double distancia_final_inimigo = distancia_inicial + (1.5 * vi);

        if(distancia_final_inimigo <= alcance_ultimate) {
            std::cout << "Y" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
    }

}