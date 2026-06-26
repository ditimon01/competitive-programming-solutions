#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int k;
    std::string s, saida_final;

    for(int i = 0; i < n; i++) {
        std::cin >> k;

        for(int j = 0; j < k; j++) {
            std::cin >> s;
            if(j == 0) {
                saida_final = s;
             } else {
                if(s != saida_final) {
                    saida_final = "ingles";
                }
             }
        }
        std::cout << saida_final << std::endl;
    }
}