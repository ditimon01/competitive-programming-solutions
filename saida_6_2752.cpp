#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string variavel = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>\n", variavel.c_str());
    printf("<%30s>\n", variavel.c_str());
    printf("<%.20s>\n", variavel.c_str());
    printf("<%-20s>\n", variavel.c_str());
    printf("<%-30s>\n", variavel.c_str());
    printf("<%.30s>\n", variavel.c_str());
    printf("<%30.20s>\n", variavel.c_str());
    printf("<%-30.20s>\n", variavel.c_str());
}