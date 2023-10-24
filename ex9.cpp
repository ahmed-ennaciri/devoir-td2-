#include <iostream>
using namespace std;
class Test {
public:
    static int counter; 
    void call() {
        counter++; 
    }
};
int Test::counter = 0;
int main() {
    Test testObj;
    for (int i = 0; i < 5; i++) {
        testObj.call();
    }
    cout << "La fonction call a tappele " << Test::counter << " fois." << endl;
    return 0;
}
