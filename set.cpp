#include<iostream>
#include<set>

using namespace std;

int main (){

    set<int> numSet;
    numSet.insert(5);
    cout << endl;
    numSet.insert(3);
    numSet.insert(6);
    for(int n : numSet) {
        cout << n << "";
    }

}