#include <iostream>
#include <string>

using namespace std;

int main() {
    string linha1, linha2;
    for(int i = 0; i < 39; i++){
        linha1 += "-";

        if(i == 0 || i == 38){
            linha2 += "|";
        }
        else{
            linha2 += " ";
        }
    }

    for(int i = 0; i < 7; i++){
        if(i == 0 || i == 6){
            cout << linha1 << endl;
        }
        else {
            cout << linha2 << endl;
        }
    }
}