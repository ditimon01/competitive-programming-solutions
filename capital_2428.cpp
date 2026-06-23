#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<float> area(4);

    cin >> area[0] >> area[1] >> area[2] >> area[3];

    bool viavel = false;

    if(area[0]/area[1] == area[2]/area[3] || area[0]/area[1] == area[3]/area[2] || area[0]/area[2] == area[3]/area[1])
        viavel = true;

    if(viavel) {
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }

}