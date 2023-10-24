#include <iostream>
using namespace std;

void incrementer(int *n) {
    (*n)++;
}

void permuter(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n = 5;
    int a = 10;
    int b = 20;

    cout << "Valeur de n : " << n << endl;
    incrementer(&n);
    cout << "Valeur de n apres incrementer() : " << n << endl;

    cout << "\nValeurs d'a et b : " << a << " " << b << endl;
    permuter(&a, &b);
    cout << "Valeurs de a et b apres permuter() : " << a << " " << b << endl;

    return 0;
}