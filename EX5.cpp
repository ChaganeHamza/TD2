#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int &ref_de_a = a;
    int *pointeur_a = &a;

    cout << "La variable a : " << a << endl;
    cout << "adresse de a : " << &a << endl;
    cout << "La valeur pointée :" << *pointeur_a << endl;
    cout << "L'adresse de référence de a : " << &ref_de_a << endl;

    return 0;
}
