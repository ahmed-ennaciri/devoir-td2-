#include <iostream>

bool estMultipleDeDeux(int nombre) {
    return nombre % 2 ==false;
}
bool estMultipleDeTrois(int nombre) {
    return nombre % 3 == false;
}
using namespace std;
int main() {
    int entier;

    cout << "Donnez un entier : ";
    cin >> entier;

    if (estMultipleDeDeux(entier)) {
        cout << "Il est pair" <<endl;
    }
    if (estMultipleDeTrois(entier)) {
        cout << "Il est multiple de 3" <<endl;
    }
    if (estMultipleDeDeux(entier) && estMultipleDeTrois(entier)) {
      cout << "Il est divisible par 6" <<endl;
    }

    return 0;
}

