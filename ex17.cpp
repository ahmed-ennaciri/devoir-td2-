#include <iostream>
#include <string>

using namespace std;

void extraireChamps(string chaine, string &jour, string &mois, string &annee, string &heure, string &minute)
{
    jour = chaine.substr(0, 2);
    mois = chaine.substr(2, 2);
    annee = chaine.substr(4, 4);
    heure = chaine.substr(8, 2);
    minute = chaine.substr(10, 2);
}

int main()
{

    string chaine;
    cout << "Entrez la date et l'heure au format JJ/MM/AAAA/HH/NN : ";
    cin >> chaine;

    if (chaine.length() == 12)

        string jour, mois, annee, heure, minute;

    extraireChamps(chaine, jour, mois, annee, heure, minute);

    cout << "Jour : " << jour << endl;
    cout << "Mois : " << mois << endl;
    cout << "Année : " << annee << endl;
    cout << "Heure : " << heure << endl;
    cout << "Minute : " << minute << endl;
}
else
{
    cout << "Format de chaîne incorrect. Assurez-vous d'entrer la date et l'heure au format JJMMAAAAHHNN." << endl;
}

return 0;
}