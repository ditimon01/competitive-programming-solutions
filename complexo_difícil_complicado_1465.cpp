#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

auto i_complexo = 1i;

int main()
{

    int numero_casos;

    double a, b;

    auto resultado = 0i;

    cin >> numero_casos;

    for (int i = 0; i < numero_casos; i++)
    {
        cin >> a >> b;

        auto numero_complexo = a + b * 1i;
        int j = 1;
        while (true)
        {
            resultado = pow(numero_complexo, j);

            if (abs(resultado) > pow(2, 30))
            {
                cout << "TOO COMPLICATED" << endl;
                break;
            }

            if (resultado.imag() == 0.0)
            {
                cout << j << endl;
                break;
            }

            j++;
        }
    }
}
