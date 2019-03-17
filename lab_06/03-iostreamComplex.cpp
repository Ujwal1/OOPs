// Using complex class to show overloading of cin & cout operators

#include <iostream>

using namespace std;

class Complex {

    double real;
    double imaginary;

    public:
        void input() {
		    cout << "\tEnter real part: ";
		    cin >> real;
		    cout << "\tEnter imaginary part: ";
		    cin >> imaginary;
		    cout << "\n";
		}

		Complex operator +(Complex c) {
		    Complex temp;
		    temp.real = real + c.real;
		    temp.imaginary = imaginary + c.imaginary;
            return temp;
		}

		Complex operator -(Complex c) {
		    Complex temp;
		    temp.real = real - c.real;
		    temp.imaginary = imaginary - c.imaginary;
            return temp;
		}

		friend ostream& operator <<(ostream& out, Complex& c);
		friend istream& operator >>(istream& in, Complex& c);
};

ostream& operator <<(ostream& out, Complex& c) {
    if(c.imaginary >= 0)
        out << c.real << " + i" << c.imaginary << endl;
    else
        out << c.real << " - i" << -c.imaginary << endl;
	return out;
}

istream& operator  >> (istream& in, Complex& c) {
	in >> c.real >> c.imaginary;
	return in;
}

int main() {
	Complex c1;
	cout << "C1\nEnter space separated value: ";
	cin >> c1;
	cout << c1;
	cout << "C2\nEnter space separated value: ";
	Complex c2;
	cin >> c2;
	cout << c2;

	Complex c3 = c1 + c2;
	cout << c3;
	Complex c4 = c1 - c2;
	cout << c4;
	return 0;
}
