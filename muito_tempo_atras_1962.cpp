#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int T, tempo;

    for(int i = 0; i < n; i++) {
        std::cin >> T;

        tempo = 2015 - T;

        if(tempo >0){
            std::cout << tempo << " D.C." << std::endl;
        } else {
            std::cout << -tempo + 1 << " A.C." << std::endl;
        }

    }
}