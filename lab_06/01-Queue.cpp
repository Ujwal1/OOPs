#include <iostream>

using namespace std;

class Queue {
private:
	int data;
	int queue[100];
	static int count;

public:
	void operator +() {
		cout << "Enter data: ";
		cin >> queue[count];
		count++;
		display();
	}

	void operator -() {
		count--;
		cout << "The last element was removed." << endl;
		display();
	}

	void display() {
	    cout << "Queue -> ";
		for(int i = 0; i < count; i++)
			cout << queue[i] << " ";
        cout << endl;
	}
};

int Queue:: count = 0;

int main() {
	cout << "--- QUEUE ---" << endl;
	Queue queue;
	+queue;
	+queue;
	+queue;
	-queue;
}
