#include <iostream>

bool isPrimo(int num);

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int caso;
        std::cin >> caso;
        caso++;

        if(caso%7 == 0 && caso%2 != 0 && isPrimo(caso+2)){
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }

    }
}

bool isPrimo(int num) {
    if(num <= 1) return false;
    for(int i = 2; i <= num / 2; ++i) {
        if(num % i == 0) return false;
    }
    return true;
}