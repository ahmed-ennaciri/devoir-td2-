#include <iostream>
#include <vector>
using namespace std;
class Pile {
private:
    vector<int> elements;

public:
    
    Pile() {}

    
    void push(int element) {
        elements.push_back(element);
    }

    
    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            cout << "La pile est vide. Impossible de dépiler." << endl;
        }
    }
};

int main() {
    
    Pile p1;
    Pile p2;

    
    p1.push(5);
    p1.push(10);
    p1.push(15);

    
    p2.push(3);
    p2.push(6);
    p2.push(9);

    
    cout << "Pile p1 :" << endl;
    p1.pop(); 
    p1.pop(); 

    
    cout << "Pile p2 :" << endl;
    p2.pop(); 
    p2.pop(); 

    return 0;
}
