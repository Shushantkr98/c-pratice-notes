#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;


    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    q.pop();

    cout << "After pop, front: " << q.front() << endl;


    cout << "Queue elements:\n";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
