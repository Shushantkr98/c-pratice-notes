#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> student;

    student[1] = "Rahul";
    student[2] = "Amit";
    student[3] = "Neha";

    
    for (auto x : student) {
        cout << x.first<< " -> " << x.second << endl;
    }

    return 0;
}
