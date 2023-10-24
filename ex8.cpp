#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string nom;
    int age;
public:
    void set_value(const string& _nom, int _age) {
        nom = _nom;
        age = _age;
    }
};
class Zebra : public Animal {
public:
    void afficherInformations() {
        cout << "Zebra : " << nom << " a " << age << " ans." <<endl;
        cout << "Lieu d'origine : Afrique" <<endl;
    }
};
class Dolphin : public Animal {
public:
    void afficherInformations() {
        cout << "Dolphin : " << nom << " a " << age << " ans." <<endl;
        cout << "Lieu d'origine : Ocian" <<endl;
    }
};
int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Zibulon", 5);
    dolphin.set_value("Flipper", 10);

    zebra.afficherInformations();
    dolphin.afficherInformations();

    return 0;
}






