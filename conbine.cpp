#include<iostream>
using namespace std;

class number {
public:
    int n;

    void data() {
        int i = 1;
        while (i <= 10) {
            cout << n << " x " << i << " = " << n * i << endl;   
            i++;
        }
    }

    void primeprinter() {     
        int prime = 2;
        while (prime <= 100) {
            int flag = 1;
            int i = 2;
            while (i < prime) {
                if (prime % i == 0) {
                    flag = 0;
                    break;
                }
                i++;
            }
            if (flag == 1) {
                cout << prime << "\t";   
            }
            prime++;
        }
        cout << endl;
    }

    int factorial(int n) {    
        if (n == 0)
            return 1;
        else
            return n * factorial(n - 1);
    }

    void oddEven() {         
        if (n % 2 == 0)
            cout << "even number\n";
        else
            cout << "odd number\n";
    }
};

int main() {

    number s1;
    int num, choice;

    cout << "value of n" << endl;
    cin >> s1.n;

    cout << "\n------ MENU ------\n";
    cout << "1. Table\n";
    cout << "2. Odd / Even\n";
    cout << "3. Prime Numbers\n";
    cout << "4. Factorial\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        s1.data();
        break;

    case 2:
        s1.oddEven();     
        break;

    case 3:
        s1.primeprinter();
        break;

    case 4:
        cout << "Enter number: ";
        cin >> num;
        cout << "Factorial = " << s1.factorial(num);
        break;

    default:
        cout << "Invalid Choice!";
    }

    return 0;
}

