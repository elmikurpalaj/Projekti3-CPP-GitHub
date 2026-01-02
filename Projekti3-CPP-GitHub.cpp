#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    string department;
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n====================================\n";
        cout << "   SISTEM PËR MENAXHIMIN E STUDENTËVE\n";
        cout << "====================================\n";
        cout << "1. Shto student\n";
        cout << "2. Shfaq studentët\n";
        cout << "0. Dil\n";
        cout << "Zgjedhja: ";
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "ID i studentit: ";
            cin >> s.id;
            cin.ignore();

            cout << "Emri i studentit: ";
            getline(cin, s.name);

            cout << "Departamenti: ";
            getline(cin, s.department);

            students.push_back(s);
            cout << "Studenti u shtua me sukses.\n";
        }
        else if (choice == 2) {
            if (students.empty()) {
                cout << "Nuk ka studentë të regjistruar.\n";
            }
            else {
                cout << "\nLISTA E STUDENTËVE:\n";
                for (const auto& s : students) {
                    cout << "ID: " << s.id
                        << " | Emri: " << s.name
                        << " | Departamenti: " << s.department << endl;
                }
            }
        }
        else if (choice == 0) {
            cout << "Programi u mbyll.\n";
        }
        else {
            cout << "Zgjedhje e pavlefshme.\n";
        }

    } while (choice != 0);

    return 0;
}
