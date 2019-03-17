#include <iostream>

#define endl "\n"

using namespace std;

class Employee {
	int empNo, rank, salary;
	string dob;

public:
	Employee() {
		empNo = rank = salary = 0;
		dob = "00-00-0000";
	}

	void init(int no, int rk, int sal, string db) {
		empNo = no;
		rank = rk;
		salary = sal;
		dob = db;
	}

	void increaseRank() {
		rank++;
		salary += 0.25 * salary;
	}

	void display() {
		cout<<"Employee No: "<<empNo<<endl;
		cout<<"Rank: "<<rank<<endl;
		cout<<"Salary: "<<salary<<endl;
		cout<<"DOB: "<<dob<<endl;
	}
};

int main() {
	Employee e1;
	e1.init(1, 2, 100, "01-01-0101");
	e1.display();
	e1.increaseRank();
	e1.display();
	return 0;
}
