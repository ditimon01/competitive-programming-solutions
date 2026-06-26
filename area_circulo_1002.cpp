#include <iostream>

using namespace std;

#define PI 3.14159

int main() {
    double raio, area;
    cin >> raio;

    area = raio*raio*PI;

    printf("A=%.4lf\n", area);

}