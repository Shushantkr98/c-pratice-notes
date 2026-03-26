#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Integer addition: " << calc.add(10, 20) << endl;
    cout << "Double addition: " << calc.add(10.5, 20.3) << endl;

    return 0;
}

