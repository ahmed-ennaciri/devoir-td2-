#include <iostream>
using namespace std;

struct Element
{
    int valeur;
    Element *suivant;
};

class Liste
{
private:
    Element *premier;

public:
    Liste() : premier(nullptr) {}

    ~Liste()
    {
        while (premier != nullptr)
        {
            Element *temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    void ajouterElement(int valeur)
    {
        Element *nouvelElement = new Element;
        nouvelElement->valeur = valeur;
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    void supprimerElement()
    {
        if (premier != nullptr)
        {
            Element *temp = premier;
            premier = premier->suivant;
            delete temp;
        }
        else
        {
            cout << "La liste est vide. Impossible de supprimer un élément." << endl;
        }
    }

    void afficherListe()
    {
        Element *courant = premier;
        while (courant != nullptr)
        {
            cout << courant->valeur << " ";
            courant = courant->suivant;
        }
        cout << endl;
    }
};

int main()
{
    Liste maListe;

    maListe.ajouterElement(5);
    maListe.ajouterElement(10);
    maListe.ajouterElement(15);

    cout << "Liste après ajout : ";
    maListe.afficherListe();

    maListe.supprimerElement();

    cout << "Liste après suppression : ";
    maListe.afficherListe();

    return 0;
}
