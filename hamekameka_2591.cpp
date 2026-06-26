#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string texto;
        cin >> texto;

        int j = 1, contador1 = 0, contador2 = 0;

        while(texto[j] == 'a') {
            contador1++;
            j++;
        }
        j+=3;
        while(texto[j] == 'a') {
            contador2++;
            j++;
        }

        cout << "k";

        for(int k = 0; k < contador1*contador2; k++) {
            cout << "a";
        }

        cout << endl;

    }


}
