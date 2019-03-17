#include <iostream>

using namespace std;

class Distance2;

class Distance1 {
private:
	float miles;

public:
	void enter() {
		cout << "Enter distance in Miles: ";
		cin >> miles;
	}

	void display() {
		cout << "The distance is " << miles << " miles" << endl;
	}

	friend void sum(Distance1&, Distance2&);
};

class Distance2 {
private:
	int kmeter;
	int meter;

public:
	void enter() {
		cout << "Enter kilometers: ";
		cin >> kmeter;
		cout << "Enter meters: ";
		cin >> meter;
	}

	void display() {
		cout << "The distance is " << kmeter << " kilometers " << meter << " meters" << endl;
	}

	friend void sum(Distance1&, Distance2&);
};

void sum(Distance1& d1, Distance2& d2) {
	float miles = d1.miles;
	d1.miles += (d2.kmeter + float(d2.meter) / 1000) / 1.6;
	float kmeter = (d2.kmeter + float(d2.meter) / 1000) + miles * 1.6;
	d2.kmeter = int(kmeter);
	d2.meter = (float(kmeter) - int(kmeter)) * 1000;
}

int main() {
	Distance1 d1;
	Distance2 d2;

	d1.enter();
	d1.display();

	d2.enter();
	d2.display();

	sum(d1, d2);
	d1.display();
	d2.display();

	return 0;
}
