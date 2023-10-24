#include <iostream>
#include <string>
using namespace std;
class Fichier
{
private:
    char *pointeur;
    int longueur;

public:
    Fichier(int taille)
    {
        pointeur = new char[taille];
        longueur = taille;
    }

    ~Fichier()
    {
        delete[] pointeur;
    }

    void Creation()
    {
    }

    void Remplit()
    {
        for (int i = 0; i < longueur; ++i)
        {
            pointeur[i] = 'A' + i % 26;
        }
    }

    void Affiche()
    {
        cout << "Contenu du fichier : " << pointeur << endl;
    }
};

int main()
{

    Fichier *monFichier = new Fichier(100);

    monFichier->Creation();
    monFichier->Remplit();
    monFichier->Affiche();

    delete monFichier;

    return 0;
}
