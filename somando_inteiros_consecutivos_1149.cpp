#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, soma = 0;

    cin >> a;

    while (cin >> b && b <= 0)
    {
    }

    for (int i = 0; i < b; i++)
    {
        soma += a + i;
    }

    cout << soma << endl;
}