#include <iostream>
#include <cmath>

//array que expande dinamicamente
#include <vector>

//biblioteca que adiciona o método find(), para evitar loop infinito ao verificar se o número é feliz
#include <algorithm>


bool isFeliz(int num);

int main() {
    int n;
    std::cin >> n;

    int contador_felizes = 0;

    //usei vector para ler os numeros, pois todos serão inseridos na mesma linha
    std::vector<int> numeros(n);

    for(int i = 0; i < n; i++) {
        std::cin >> numeros[i];
    }

    for(int i = 0; i < n; i++) {

        if(isFeliz(numeros[i])){
            contador_felizes++;
        }

    }

    std::cout << contador_felizes << std::endl;

}

bool isFeliz(int num) {
    int sequencia = num;
    std::string sequencia_string = std::to_string(sequencia);

    std::vector<int> numeros_passados;
    
    while(sequencia != 1) {
        
        //funciona como um laço for, que retorna a posição caso o elemento seja encontrado, caso n encontre, retorna ".end()", que é uma casa vazia que representa o fim do vector
        if(std::find(numeros_passados.begin(), numeros_passados.end(),  sequencia) != numeros_passados.end()) {
            return false;
        } 

        numeros_passados.push_back(sequencia);
        
        sequencia_string = std::to_string(sequencia);
        
        sequencia = 0;

        for(char digito : sequencia_string) {
            sequencia += std::pow((digito - '0'), 2);
        }
    } 

    return true;
}