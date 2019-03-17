#include <iostream>
#include <string.h>

using namespace std;

class Staff {
private:
	int code;
	char name[50];

public:
	Staff() {
		code = 0;
		strcpy(name, "");
	}

	Staff(int code, char name[]) {
		this->code = code;
		strcpy(this -> name, name);
	}

	void setData() {
		cout << "Enter Code: ";
		cin >> code;
		cout << "Enter Name: ";
		cin >> name;
	}

	void displayData() {
		cout << "Code: " << code << endl;
		cout << "Name: " << name << endl;
	}
};

class Education {
private:
	char gq[100];
	char pq[100];

public:
	Education() {
		strcpy(gq, "");
		strcpy(pq, "");
	}

	Education(char gq[], char pq[]) {
		strcpy(this->gq, gq);
		strcpy(this->pq, pq);
	}

	void setData() {
		cout << "Enter Highest Qualification in General Education: ";
		cin >> gq;
		cout << "Enter Highest Professional Qualification: ";
		cin >> pq;
	}

	void displayData() {
		cout << "Highest Qualification in General Education: " << gq << endl;
		cout << "Highest Professional Qualification: " << pq << endl;
	}
};

class Teacher : public Staff, public Education {
private:
	char subject[50];
	char publication[100];

public:
	Teacher() : Staff(), Education() {
		strcpy(subject, "");
		strcpy(publication, "");
	}

	Teacher(int code, char name[], char gq[], char pq[], char subject[], char publication[]) : Staff(code, name), Education(gq, pq) {
		strcpy(this->subject, subject);
		strcpy(this->publication, publication);
	}

	void setData() {
		Staff :: setData();
		Education :: setData();
		cout << "Enter Subject: ";
		cin >> subject;
		cout << "Enter Publication: ";
		cin >> publication;
	}

	void displayData() {
		Staff :: displayData();
		Education :: displayData();
		cout << "Subject: " << subject << endl;
		cout << "Publication: " << publication << endl;
	}
};

class Typist : public Staff {
private:
	int speed;

public:
	Typist() : Staff() {
		speed = 0;
	}

	Typist(int code, char name[], int speed) : Staff(code, name) {
		this->speed = speed;
	}

	void setData() {
		Staff :: setData();
		cout << "Enter Speed: ";
		cin >> speed;
	}

	void displayData() {
		Staff :: displayData();
		cout << "Typing Speed: " << speed << endl;
	}
};

class Officer : public Staff, public Education {
private:
	char grade[5];

public:
	Officer() : Staff(), Education() {
		strcpy(grade, "");
	}

	Officer(int code, char name[], char gq[], char pq[], char grade[]) : Staff(code, name), Education(gq, pq) {
		strcpy(this->grade, grade);
	}

	void setData() {
		Staff :: setData();
		Education :: setData();
		cout << "Enter Grade: ";
		cin >> grade;
	}

	void displayData() {
		Staff :: displayData();
		Education :: displayData();
		cout << "Grade: " << grade << endl;
	}
};

class Regular : Typist {
private:
	int wage;

public:

	Regular() : Typist() {
		wage = 0;
	}

	Regular(int code, char name[], int speed, int wage) : Typist(code, name, speed) {
		this->wage = wage;
	}

	void setData() {
		Typist :: setData();
		cout << "Enter Monthly Wage: ";
		cin >> wage;
	}

	void displayData() {
		Typist :: displayData();
		cout << "Monthly Wage: " << wage << endl;
	}
};

class Casual : Typist {
private:
	int wage;

public:
	Casual() {
		wage = 0;
	}

	Casual(int code, char name[], int speed, int wage) : Typist(code, name, speed) {
		this->wage = wage;
	}

	void setData() {
		Typist :: setData();
		cout << "Enter Daily Wage: ";
		cin >> wage;
	}

	void displayData() {
		Typist :: displayData();
		cout << "Daily Wage: " << wage << endl;
	}
};

int main() {
	// Teacher t;
	// Regular r;
	// Casual c;
	// Officer o;

	//t.setData();
	//t.displayData();

    Teacher t(123, "xyz", "GQ", "PQ", "OOPS", "Pearson");
    t.displayData();
    cout << endl;

	// r.setData();
	// r.displayData();

    Regular r(111, "aaa", 60, 5000);
    r.displayData();
    cout << endl;

	// c.setData();
	// c.displayData();

    Casual c(222, "ccc", 15, 50);
    c.displayData();
    cout << endl;

	// o.setData();
	// o.displayData();

	Officer o(999, "Vin", "gq", "pq", "3");
	o.displayData();
	cout << endl;

	return 0;
}
