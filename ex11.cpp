#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3D {
private:
    float x, y, z;

public:

    Vecteur3D(float _x = 0, float _y = 0, float _z = 0) : x(_x), y(_y), z(_z) {}
    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    
    Vecteur3D somme(const Vecteur3D& v) const {
        return Vecteur3D(x + v.x, y + v.y, z + v.z);
    }

    
    float produitScalaire(const Vecteur3D& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

   
    bool coincide(const Vecteur3D& v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    
    static Vecteur3D& normax(Vecteur3D& v1, Vecteur3D& v2) {
        return (v1.norme() > v2.norme()) ? v1 : v2;
    }
};

int main() {
    Vecteur3D v1(1, 2, 3);
    Vecteur3D v2(4, 5, 6);

cout << "Vecteur 1 : ";
    v1.afficher();
    cout << "Vecteur 2 : ";
    v2.afficher();

    Vecteur3D somme = v1.somme(v2);
    cout << "Somme des vecteurs : ";
    somme.afficher();

    cout << "Produit scalaire : " << v1.produitScalaire(v2) << endl;

    if (v1.coincide(v2)) {
        cout << "Les vecteurs ont les mêmes composantes." << endl;
    } else {
        cout << "Les vecteurs n'ont pas les mêmes composantes." << endl;
    }

    cout << "Norme du vecteur 1 : " << v1.norme() << endl;
    cout << "Norme du vecteur 2 : " << v2.norme() << endl;

    Vecteur3D& vecteurMax = Vecteur3D::normax(v1, v2);
    cout << "Le vecteur avec la plus grande norme est : ";
    vecteurMax.afficher();

    return 0;
}
