#include <iostream>
#include <stack>
using namespace std;

class Pile {
    private:
        stack<int> elements;

    public:
        Pile() {}

        void empiler(int value) {
            elements.push(value);
        }

        int depiler() {
            if(elements.empty()) {
                throw out_of_range("La pile est vide.");
            }
            int value = elements.top();
            elements.pop();
            return value;
        }

        bool estVide() const {
            return elements.empty();
        }

        size_t taille() const {
            return elements.size();
        }
};

int main() {
    Pile p1;
    Pile p2;

    p1.empiler(5);
    p1.empiler(10);
    p1.empiler(15);

    p2.empiler(2);
    p2.empiler(4);
    p2.empiler(6);

    while(!p1.estVide()) {
        cout << "Dépiler " << p1.depiler() << endl;
    }

    while(!p2.estVide()) {
        cout << "Dépiler " << p2.depiler() << endl;
    }

    return 0;
}