#include <iostream>

#define endl "\n"

using namespace std;

class Student {
	int roll_number, year, semester;
	string department;

public:
	 Student() {
	 	roll_number = year = semester = 0;
	 	department = "NULL";
	 }

	 void init(int rno, string dept, int yr, int sem) {
	 	roll_number = rno;
	 	department = dept;
	 	year = yr;
	 	semester = sem;
	 }

	 void display() {
	 	cout<<"Roll Number: "<<roll_number<<endl;
	 	cout<<"Department: "<<department<<endl;
	 	cout<<"Year: "<<year<<endl;
	 	cout<<"Semester: "<<semester<<endl;
	 }
};

int main() {
	Student s1;
	s1.display();
	s1.init(1, "CSE", 2, 3);
	s1.display();

	return 0;
}