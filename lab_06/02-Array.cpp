#include <iostream>

using namespace std;

class Array {
private:
	int** arr;
	int m;
	int n;

public:
	Array(int m, int n) {
		// m x n sized Array
		// m rows
		// n columns
		this->m = m;
		this->n = n;
		arr = new int*[m];
	}

	void addElements() {
		for(int i = 0; i < m; i++) {
			arr[i] = new int[n];
			for(int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
	}

	void display() {
		cout << "Elements-> ";
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}

	friend int operator ==(Array arr1, Array arr2) {
		if(arr1.m == arr2.m && arr1.n == arr2.n) {
			for(int i = 0; i < arr1.m; i++) {
				for(int j = 0; j < arr1.n; j++) {
					cout << "arr1[" << i << "][" << j << "] = " << arr1.arr[i][j] << " ";
					cout << "arr2[" << i << "][" << j << "] = " << arr2.arr[i][j] << endl;
					if(arr1.arr[i][j] != arr2.arr[i][j]) {
						return 0;
					}
				}
			}
			return 1;
		}
		return 0;
	}

    // = operator is already overloaded
    // it is a rule that = operator can't be overloaded using friend
    int operator =(Array arr1) {
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++)
				arr[i][i] == arr1.arr[i][j];
		}
	}
};

int main() {
	int m, n;
	cout << "A" << endl;
	cout << "Enter dimensions of a: ";
	cin >> m >> n;
	Array a(m, n);
	a.addElements();
	a.display();

    cout << "B" << endl;
	cout << "Enter dimensions of b: ";
	cin >> m >> n;
	Array b(m, n);
	b.addElements();
	b.display();

	if(a==b)
		cout << "a == b";
	else
		cout << "a != b";
    cout << endl;

	Array c = b;
	cout << "C" << endl;
	c.display();

	if(c==b)
		cout << "c == b";
	else
		cout << "c != b";
    cout << endl;

    return 0;
}
