#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numero_jogos, mary, john;

    while (cin >> numero_jogos && numero_jogos != 0)
    {
        mary = 0;
        john = 0;

        for (int i = 0; i < numero_jogos; i++)
        {
            int resultado;
            cin >> resultado;

            if (resultado == 0)
                mary++;
            if (resultado == 1)
                john++;
        }

        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
    }
}