#include <iostream>
#include <cstdlib>
using namespace std;

class Fichier {
private:
    int *P;
    size_t Longueur;

public:
    Fichier(size_t longueur) : Longueur(longueur) {
        P = new int[longueur];
    }

    ~Fichier() {
        delete[] P;
    }

    void Creation() {

    }

    void Remplit() {
     for (size_t i = 0; i < Longueur; ++i) {
            P[i] = i * 2;
        }
    }

    void Affiche() {
        for (size_t i = 0; i < Longueur; ++i) {
            cout << P[i] << " ";
        }
        cout << std::endl;
    }
};

int main() {
    size_t longueur = 5;
    Fichier *f = new Fichier(longueur);
    f->Remplit();
    f->Affiche();
    delete f;

    return 0;
}