#include <iostream>
using namespace std;

int main() {
    int t[10];
    cout << "Entrez 10 nombres entiers : " << endl;

    for (int i = 0; i < 10; i++) {
        std::cin >> t[i];
    }

    int p_Grand = t[0];
    int p_Petit = t[0];

    for (int i = 1; i < 10; i++) {
        if (t[i] > p_Grand) {
            p_Grand = t[i];
        }
        if (t[i] < p_Petit) {
            p_Petit = t[i];
        }
    }

    cout << "Le plus grand nombre est : " << p_Grand << endl;
    cout << "Le plus petit nombre est : " << p_Petit << endl;

    return 0;
}
