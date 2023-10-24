#include <iostream>
#include <string>
using namespace std;
int main() {
    string dateEtHeure;
    cout << "Entrez la date et l'heure (JJMMAAAAHHNN) : ";
    cin >> dateEtHeure;
    string jour = dateEtHeure.substr(0, 2);
    string mois = dateEtHeure.substr(2, 2);
    string annee = dateEtHeure.substr(4, 4);
    string heure = dateEtHeure.substr(8, 2);
    string minute = dateEtHeure.substr(10, 2);
    cout << "Jour : " << jour <<endl;
    cout << "Mois : " << mois <<endl;
    cout << "Annee : " << annee <<endl;
    cout << "Heure : " << heure <<endl;
    cout << "Minute : " << minute <<endl;
    return 0;
}
