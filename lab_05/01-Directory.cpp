#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class Directory {
private:
    char name[50], number[10];

public:
    void setValues() {
        ofstream file;
        file.open("Directory.txt", ios::app);
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Number: " << endl;
        cin >> number;
        file << name << " " << number << endl;
        cout << "Contact Added!!!";
    }

    void getValues() {
        char ar[60];
        ifstream file("Directory.txt");
        while(file) {
            file.getline(ar, 60);
            cout << ar << endl;
        }
    }
};

int main() {
    Directory dir;
    int ch;
    while(1) {
        cout << "----- WELCOME TO DIRECTORY -----" << endl << "\t\t by Arnav" << endl;
        cout << "Select Option: " << endl << "1. Enter Contact" << endl << "2. Display Contacts" << endl << "3. Exit" << endl;
        cin >> ch;
        switch(ch) {
            case 1: dir.setValues();
                    break;

            case 2: dir.getValues();
                    break;

            case 3: exit(0);

            default: cout << "ERROR: Incorrect Choice!!!" << endl;
        }
    }
    return 0;
}
