#include <iostream>
using namespace std;

int main() {
    int t[10];
    int *ptr = t;
    cout << "Entrez 10 nombres entiers : " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> *(ptr + i);
    }

    int *max = t;
    int *min = t;

    for (int i = 1; i < 10; i++) {
        if (*(ptr + i) > *max) {
            max = ptr + i;
        }
        if (*(ptr + i) < *min) {
            min = ptr + i;
        }
    }

    cout << "Le plus grand nombre est : " << *max << endl;
    cout << "Le plus petit nombre est : " << *min << endl;

    return 0;
}
