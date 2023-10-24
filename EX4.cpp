#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "donner la taille du tableau : ";
    cin >> t;

    int *T = new int[t];

    cout << "Entrez " << t << " nombres entiers : " << endl;
    for (int i = 0; i < t; i++) {
        cin >> T[i];
    }

    int *T_Carre = new int[t];

    
    for (int i = 0; i < t; i++) {
        T_Carre[i] = T[i] * T[i];
    }

    cout << "Tableau des carrés : ";
    for (int i = 0; i < t; i++) {
        cout << T_Carre[i] << " ";
    }
    cout << endl;

    delete[] T;
    delete[] T_Carre;

    return 0;
}
