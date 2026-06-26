#include <iostream>
#include <string>

//os 2 a seguir (set e unordered_set) servem para armazenar elementos sem repetição 
#include <set> // mantém os elementos ordenados || O(log n)
#include <unordered_set> // ordem aleatória, hash || O(1)

int main() {
    int n, quantidade_caracteres;
    std::cin >> n;
    std::cin.ignore();

    std::string frase;
    std::unordered_set<char> caracteres_lidos;

    for(int i = 0; i < n; i++){
        // apenas "cin" padrão, lê até o espaço
        // std::cin >> frase;

        std::getline(std::cin, frase);

        caracteres_lidos.clear();

        for(char caractere : frase) {
            if(caractere >= 'a' && caractere <= 'z')
                caracteres_lidos.insert(caractere);
        }

        quantidade_caracteres = caracteres_lidos.size();

        if (quantidade_caracteres >= 26) {
            std::cout << "frase completa" << std::endl;
        } else if(quantidade_caracteres >= 13) {
            std::cout << "frase quase completa" << std::endl;
        } else {
            std::cout << "frase mal elaborada" << std::endl;
        }
        
    }

}