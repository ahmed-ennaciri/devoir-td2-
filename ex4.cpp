#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    int *tableau1 = new int[n];

    cout << "Entrez " << n << " nombres entiers : ";
    for (int i = 0; i < n; i++) {
        cin >> tableau1[i];
    }
     int *tableau2 = new int[n];

    for (int i = 0; i < n; i++) {
        tableau2[i] = tableau1[i] * tableau1[i];
    }
    cout << "Carres des nombres du premier tableau : ";
    for (int i = 0; i < n; i++) {
        cout << tableau2[i] << " ";
    }
    cout << endl;
    delete[] tableau1;
    delete[] tableau2;

    return 0;
}

