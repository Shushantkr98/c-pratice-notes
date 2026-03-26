#include <fstream>
#include <iostream>
using namespace std;

struct Student {
    int id;
    char name[50];
    float grade;
};

int main() {

    while (1) {

        cout << "\n1. Add record\n2. Read Record\n3. Update record\n4. Delete record\n5. Exit\n";

        int option;
        cin >> option;

        if (option == 1) {

            Student s;
            cout << "Enter ID: ";
            cin >> s.id;
            cout << "Enter Name: ";
            cin >> s.name;
            cout << "Enter Grade: ";
            cin >> s.grade;

            ofstream out("students.bin", ios::binary | ios::app);
            out.write(reinterpret_cast<char*>(&s), sizeof(s));
            out.close();
        }

        else if (option == 2) {

            Student s;
            ifstream in("students.bin", ios::binary);
            while (in.read(reinterpret_cast<char*>(&s), sizeof(s))) {
                cout << s.id << " " << s.name << " " << s.grade << endl;
            }
            in.close();
        }
        else if (option == 3){

    Student s;
    int targetId;

    cout << "Enter ID to update: ";
    cin >> targetId;

    fstream file("students.bin", ios::binary | ios::in | ios::out);

    while (file.read(reinterpret_cast<char*>(&s), sizeof(s))){

        if (s.id == targetId){

            cout << "Enter new grade: ";
            cin >> s.grade;

            file.seekp(-static_cast<int>(sizeof(s)), ios::cur);
            file.write(reinterpret_cast<char*>(&s), sizeof(s));
            break;
        }
    }

    file.close();
}
else if (option == 4){
    Student s;
    int deleteId;

    cout << "Enter ID to delete: ";
    cin >> deleteId;

    ifstream in("students.bin", ios::binary);
    ofstream out("temp.bin", ios::binary);

    if(!in || !out){
        cout << "File open error\n";
        return 0;
    }

    while (in.read(reinterpret_cast<char*>(&s), sizeof(s))){
        if (s.id != deleteId){
            out.write(reinterpret_cast<char*>(&s), sizeof(s));
        }
    }

    in.close();
    out.close();

    remove("students.bin");
    rename("temp.bin", "students.bin");

    cout << "Record deleted successfully\n";
}

        else if (option == 5) {
            break;
        }
    }
}

