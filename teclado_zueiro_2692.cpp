#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numero_trocas, numero_frases;
    string lixo;

    cin >> numero_trocas >> numero_frases;

    map<char, char> trocas;

    for (int i = 0; i < 256; i++)
    {
        trocas[i] = (char)i;
    }

    for (int i = 0; i < numero_trocas; i++)
    {
        char de, para;
        cin >> de >> para;

        trocas[de] = para;
        trocas[para] = de;
    }

    getline(cin, lixo);

    for (int i = 0; i < numero_frases; i++)
    {
        string frase_atual, frase_correta = "";

        getline(cin, frase_atual);

        for (char c : frase_atual)
        {
            frase_correta += trocas[c];
        }

        cout << frase_correta << endl;
    }
}