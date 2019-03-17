// PENDING
// Reverse List

#include <iostream>

using namespace std;

template <class T> class List {
    T data;
    List* next;

public:
    List() {
        next = NULL;
    }

    void insertElement() {
        List<T>* head = this;
        List<T>* temp = new List<T>();
        cout << "Enter Data: ";
        cin >> temp->data;
        while(head->next != NULL)
            head = head->next;
        head->next = temp;
        cout << "Element was Added!!!" << endl;
    }

    void deleteElement() {
        T dat;
        List<T>* head = this;
        List<T>* nxt = this->next;
        cout << "Enter element to delete: ";
        cin >> dat;
        if(head == NULL) {
            cout << "Empty List!!!" << endl;
            return;
        }
        if(head->data == dat) {
            head = head->next;
            cout << dat << " was deleted from the List!!!" << endl;
            return;
        }
        while(nxt != NULL) {
            if(nxt->data == dat) {
                head->next = nxt->next;
                cout << dat << " was deleted from the List!!!" << endl;
                return;
            }
            nxt = nxt->next;
            head = head->next;
        }
        cout << dat << " was not found in the List!!!" << endl;
    }

    void sortList() {
        List<T>* head = this->next;

        while(head != NULL) {
            List<T>* trav = head->next;
            while(trav != NULL) {
                if(head->data > trav->data) {
                    T temp = head->data;
                    head->data = trav->data;
                    trav->data = temp;
                }
                trav = trav->next;
            }
            head = head->next;
        }
    }

    void reverseList() {
        List<T>* head = this->next;
        List<T>* rev = new List<T>();
        while(head != NULL) {
            List<T>* temp = new List<T>();
            temp->data = head->data;
            temp->next = rev;
            rev->next = temp;
            head = head->next;
            cout << "temp->data: " << temp->data << endl;
            cout << "rev->data: " << rev->data << endl;
            cout << "head->data: " << head->data << endl ;
        }
        head = rev;
    }

    void displayList() {
        List<T>* head = this->next;
        cout << "Linked List: ";
        while(head != NULL) {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};

class Complex {

    double real;
    double imaginary;

    public:
        void input() {
		    cout << "\tEnter real part: ";
		    cin >> real;
		    cout << "\tEnter imaginary part: ";
		    cin >> imaginary;
		    cout << endl;
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

        friend int operator ==(Complex c1, Complex c2) {
            if(c1.real == c2.real && c1.imaginary == c2.imaginary)
                return 1;
            return 0;
        }

        friend int operator >(Complex c1, Complex c2) {
            if(c1.real > c2.real)
                return 1;
            if(c1.real == c2.real && c1.imaginary > c2.imaginary)
                return 1;
            return 0;
        }

		friend ostream& operator <<(ostream& out, Complex& c) {
            if(c.imaginary >= 0)
                out << c.real << " + i" << c.imaginary;
            else
                out << c.real << " - i" << -c.imaginary;
        	return out;
        }

		friend istream& operator >>(istream& in, Complex& c) {
            in >> c.real >> c.imaginary;
        	return in;
        }
};

int main() {
    List<int> ill;
    ill.insertElement();
    ill.insertElement();
    ill.insertElement();
    ill.insertElement();
    ill.insertElement();
    ill.displayList();
    ill.deleteElement();
    ill.displayList();
    ill.sortList();
    ill.displayList();
    ill.reverseList();
    ill.displayList();


    List<Complex> zll;
    zll.insertElement();
    zll.insertElement();
    zll.insertElement();
    zll.insertElement();
    zll.insertElement();
    zll.displayList();
    zll.deleteElement();
    zll.displayList();
    zll.sortList();
    zll.displayList();

    // List<float> fll;
    // fll.insertElement();
    // fll.insertElement();
    // fll.insertElement();
    // fll.insertElement();
    // fll.insertElement();
    // fll.displayList();
    // fll.deleteElement();
    // fll.displayList();
    //
    // List<char> cll;
    // cll.insertElement();
    // cll.insertElement();
    // cll.insertElement();
    // cll.insertElement();
    // cll.insertElement();
    // cll.displayList();
    // cll.deleteElement();
    // cll.displayList();

    return 0;
}
