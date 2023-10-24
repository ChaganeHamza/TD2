#include <iostream>
using namespace std;

bool multiple_par_2(int n) {
    return n % 2 == 0;
}

bool multiple_par_3(int n) {
    return n % 3 == 0;
}

int main() {
    int n;

    cout << "Entrer un entier : ";
    cin >> n;

    if (multiple_par_2(n)) {
        cout << "l'entier est pair" << endl;
    }
    if (multiple_par_3(n)) {
        cout << "l'entier est multiple de 3" << endl;
    }
    if (multiple_par_2(n) && multiple_par_3(n)) {
        cout << "l'entier est divisible par 6" << endl;
    }

    return 0;
}