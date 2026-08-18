#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numero;
    cin >> numero;
    string lixo;

    getline(cin, lixo);

    for (int i = 0; i < numero; i++)
    {
        getline(cin, lixo);

        cout << "gzuz" << endl;
    }
}