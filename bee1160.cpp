#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int PA, PB;
        double G1, G2;
        cin >> PA >> PB >> G1 >> G2;

        int anos = 0;

        while (PA <= PB) {
            PA += (PA * G1) / 100;
            PB += (PB * G2) / 100;
            
            anos++;

            if (anos > 100) {
                break;
            }
        }

        if (anos > 100) {
            cout << "Mais de 1 seculo.\n";
        } else {
            cout << anos << " anos.\n";
        }
    }

    return 0;
}