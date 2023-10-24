#include <iostream>
#include <cmath>
using namespace std;

class vecteur3d {
    float x, y, z;

public:
    vecteur3d(float _x = 0, float _y = 0, float _z = 0) : x(_x), y(_y), z(_z) {}

    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")\n";
    }

    vecteur3d operator+(const vecteur3d& v) const {
        return vecteur3d(x + v.x, y + v.y, z + v.z);
    }

    float operator*(const vecteur3d& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    bool coincide(const vecteur3d& v) const {
        return x == v.x && y == v.y && z == v.z;
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    static vecteur3d& normax(vecteur3d& v1, vecteur3d& v2) {
        return (v1.norme() > v2.norme()) ? v1 : v2;
    }
};