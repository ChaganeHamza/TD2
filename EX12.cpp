#include <iostream>

class Test {
public:
    static int calls;

    void call() {
        calls++;
    }
};

int Test::calls = 0;

int main() {
    Test test1;
    Test test2;

    test1.call();
    test1.call();
    test2.call();

    std::cout << "Le membre call() a été appelé " << Test::calls << " fois.\n";

    return 0;
}