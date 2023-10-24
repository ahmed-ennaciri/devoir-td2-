#include <iostream>
using namespace std;
void incrementer(int* ptr) {
    (*ptr)++;  
}
void permuter(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void incrementerParReference(int& ref) {
    ref++;  
}
void permuterParReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1 = 5;
    int num2 = 10;
    cout << "Avant d'appeler les fonctions :" <<endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 <<endl;
    incrementer(&num1);
    permuter(&num1, &num2);
    cout << "Apres appel de incrementer() par adresse et permuter() par adresse :" <<endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    num1 = 5;
    num2 = 10;
    incrementerParReference(num1);
    permuterParReference(num1, num2);
    cout << "Apres appel de incrementerParReference() par reference et permuterParReference() par reference :" <<endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 <<endl;
    return 0;
}





