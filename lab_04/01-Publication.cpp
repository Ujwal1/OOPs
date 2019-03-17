#include <iostream>

using namespace std;

class Publication {
private:
	string title;
	float price;

public:
	void setData() {
		cout << "Enter Title: ";
		getline(cin,title);
		//cin >> title;cin.get();
		cout << "Enter Price: ";
		cin >> price;
	}

	string getTitle() {
		return title;
	}

	float getPrice() {
		return price;
	}
};

class Book : public Publication {
private:
	int pagecount;

public:
	void setData() {
		Publication :: setData();
		cout << "Enter Page Count: ";
		cin >> pagecount;
		//cin.get(pagecount);
	}

	void displayData() {
		cout << "Title: " << getTitle() << endl;
		cout << "Price: " << getPrice() << endl;
		cout << "PageCount: " << pagecount << endl;
	}
};

class Tape : public Publication {
private:
	int playTime;

public:
	void setData() {
		Publication :: setData();
		cout << "Enter Playing Time: ";
		cin >> playTime;
	}

	void displayData() {
		cout << "Title: " << getTitle() << endl;
		cout << "Price: " << getPrice() << endl;
		cout << "Play Time: " << playTime << endl;
	}
};

int main() {
	Book b;
	Tape t;

	b.setData();
	b.displayData();

	cout << endl;

	t.setData();
	t.displayData();
}
