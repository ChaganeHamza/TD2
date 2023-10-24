#include <iostream>
using namespace std;

int appelnb = 0;

void f_Appel() {
    appelnb++;
    cout << "appel numero " << appelnb << endl;
}

int main() {
    f_Appel();
    f_Appel();
    f_Appel();
    f_Appel();

    return 0;
}
