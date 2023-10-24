#include <iostream>

using namespace std;

struct Element {
    int data;
    Element* next;
};

class Liste {
private:
    Element* head;

public:
    Liste() : head(nullptr) {}

     Liste() {
        Element* current = head;
        while (current != nullptr) {
            Element* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void ajouterElement(int value) {
        Element* newElement = new Element;
        newElement->data = value;
        newElement->next = head;
        head = newElement;
    }

    void supprimerElement() {
        if (head != nullptr) {
            Element* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void afficherListe() {
        Element* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};