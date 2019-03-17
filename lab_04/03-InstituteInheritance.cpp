#include <iostream>

using namespace std;

class Education;

class Staff {
private:
	int code;
	char name[50];

public:
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
	Teacher t;
	Regular r;
	Casual c;
	Officer o;

    cout << "Teacher: " << endl;
	t.setData();
	cout << endl;
	t.displayData();
    cout << endl;

    cout << "Regular Typist: " << endl;
	r.setData();
	cout << endl;
	r.displayData();
	cout << endl;

    cout << "Casual Typist: " << endl;
	c.setData();
	cout << endl;
	c.displayData();
	cout << endl;

    cout << "Officer: " << endl;
	o.setData();
	cout << endl;
	o.displayData();
	cout << endl;

	return 0;
}
