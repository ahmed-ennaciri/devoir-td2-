#include <iostream>
using namespace std;
class Test {
private:
    static int counter; 

public:
    void call() {
        cout << "Fonction call a été appelée." << endl;
        counter++;
    }

    static int getCallCount() {
        return counter;
    }
};


int Test::counter = 0;

int main() {
    Test obj1, obj2, obj3;

    obj1.call(); 
    obj2.call(); 
    obj3.call(); 

    cout << "La fonction call a été appelée " << Test::getCallCount() << " fois." << endl;

    return 0;
}
