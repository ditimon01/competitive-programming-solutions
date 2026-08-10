#include <iostream>

using namespace std;

int main() {
    int numero_corridas, numero_participantes, tempo_total;
    int vencedor = -1, menor_tempo;

    cin >> numero_participantes >> numero_corridas;

    for (int i = 0; i < numero_participantes; i++) {
        tempo_total = 0;

        for (int j = 0; j < numero_corridas; j++) {
            int tempo_corrida;
            cin >> tempo_corrida;
            tempo_total += tempo_corrida;
        }

        if (vencedor == -1 || tempo_total < menor_tempo) {
            vencedor = i + 1;
            menor_tempo = tempo_total;
        }
    }

    cout << vencedor << endl;
}