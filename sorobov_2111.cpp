#include <iostream>
#include <string>

// representando as saídas de cada dígito
    const std::string saidas[10] = {
        "1001111", // 0
        "1010111", // 1
        "1011011", // 2
        "1011101", // 3
        "1011110", // 4
        "0101111", // 5
        "0110111", // 6
        "0111011", // 7
        "0111101", // 8
        "0111110"  // 9
    };

int main() {
    int n;

    // pesquisei e ler um inteiro e convertê-lo para string tem menos custo computacional do que ler uma string
    while(std::cin >> n) {
        std::string numero = std::to_string(n);
        //normalizar a string (preencher com 0's a esquerda)
        numero = std::string(9 - numero.length(), '0') + numero;

        // i acompanha a linha, vai ser usado para percorrer "saidas"
        for(int i = 0; i < 2; i++) {
            // j percorre as colunas, será usado para percorrer qual digito está sendo imprimido
            for(int j = 0; j < 9; j++){
                int digito = numero[j] - '0';
                std::cout << saidas[digito][i];
            }
            std::cout << std::endl;
        }

        std::cout << "---------" << std::endl;

        for(int i = 2; i < 7; i++) {
            for(int j = 0; j < 9; j++){
                int digito = numero[j] - '0';
                std::cout << saidas[digito][i];
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
 
}