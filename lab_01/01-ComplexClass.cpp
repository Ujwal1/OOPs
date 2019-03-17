#include <iostream>

using namespace std;

class Complex {

    double real;
    double imaginary;

    public:
        void input();
        void add(Complex a, Complex b);
        void subtract(Complex a, Complex b);
        void display();
};

void Complex:: input() {
    cout<<"\tEnter real part: ";
    cin>>real;
    cout<<"\tEnter imaginary part: ";
    cin>>imaginary;
    cout<<"\n";
}

void Complex:: add(Complex a, Complex b) {
    cout<<"Sum is: "<<a.real + b.real<<" + i"<<a.imaginary + b.imaginary<<"\n";
}

void Complex:: subtract(Complex a, Complex b) {
    if(a.imaginary > b.imaginary)
        cout<<"Subtraction is: "<<b.real - a.real<<" - i"<<a.imaginary - b.imaginary<<"\n";
    else
        cout<<"Subtraction is: "<<b.real - a.real<<" + i"<<b.imaginary - a.imaginary<<"\n";
}

void Complex:: display() {
    cout<<real<<" + "<<"i"<<imaginary<<"\n\n";
}

int main() {
    Complex n1, n2;
    cout<<"Enter 1st number: \n";
    n1.input();
    n1.display();
    cout<<"Enter 2nd number: \n";
    n2.input();
    n2.display();
    n1.add(n1, n2);
    n2.subtract(n1, n2);
    return 0;
}
