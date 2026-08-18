#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<unsigned long long> fib(61);

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }

    int numero_casos;
    cin >> numero_casos;

    for (int i = 0; i < numero_casos; i++)
    {
        int termo;
        cin >> termo;

        cout << "Fib(" << termo << ") = " << fib[termo] << endl;
    }
}