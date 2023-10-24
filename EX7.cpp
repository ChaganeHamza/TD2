#include <iostream>
using namespace std;
void echanger(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void trier(int t[], int n) {
    for (int i = 0; i < n-1; i++) {
        int cmp = 0;

        for (int j = 0; j < n-i-1; j++) {
            if (t[j] > t[j+1]) {
                echanger(t[j], t[j+1]);
                cmp++;
            }
        }

        if (cmp == 0) {
            break;
        }
    }
}

int main() {
    int tableau[10];
    cout << "Entrez 10 entiers : ";
    for (int i = 0; i < 10; i++) {
        cin >> tableau[i];
    }

    trier(tableau, 10);
    cout << "Voici le tableau trie : ";

    for (int i = 0; i < 10; i++) {
        cout << tableau[i] << " ";
    }

    return 0;
}