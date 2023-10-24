#include <iostream>
using namespace std;
void fonctionAppel()
{
  static int compteur = 0;
  compteur++;
  cout << "appel numero [" << compteur <<"]"<< endl;
}

int main()
{
  fonctionAppel();
  fonctionAppel();
  fonctionAppel();

  return 0;
}
