#include <iostream>

using namespace std;

class BankAccount {
    char name[100];
    long acc_no;
    char acc_type[50];
    long balance;

public:
    void init(BankAccount holders[], int size) {
        int i;
        for(i = 0; i < size; i++) {
            cout<<"Enter Name: ";
            cin>>holders[i].name;
            cout<<"Enter Account Number: ";
            cin>>holders[i].acc_no;
            cout<<"Enter acc_type: ";
            cin>>holders[i].acc_type;
            cout<<"Enter Balance: ";
            cin>>holders[i].balance;
            cout<<"\n";
        }
    }

    void deposit(BankAccount holders[], int size) {
        int amount, acc_no, i;
        cout<<"Enter Account No.: ";
        cin>>acc_no;
        for(i = 0; i < size; i++) {
            if(holders[i].acc_no == acc_no) {
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                cout<<"\n";
                holders[i].balance += (long) amount;
                cout<<"New Balance: "<<holders[i].balance<<"\n";
                return;
            }
        }
        cout<<"Account not found\n";
    }

    void withdraw(BankAccount holders[], int size) {
        int amount, acc_no, i;
        cout<<"Enter Account No.: ";
        cin>>acc_no;
        for(i = 0; i < size; i++) {
            if(holders[i].acc_no == acc_no) {
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                cout<<"\n";
                holders[i].balance -= (long) amount;
                cout<<"New Balance: "<<holders[i].balance<<"\n";
                return;
            }
        }
        cout<<"Account not found\n";
    }

    void display(BankAccount holders[], int size) {
        int i;
        for(i = 0; i < size; i++) {
            cout<<"Name: "<<holders[i].name<<"\n";
            cout<<"Balance: "<<holders[i].balance<<"\n";
            cout<<"\n";
        }
    }
};

    int main() {
        int size, i;
        cout<<"Enter no. of holders: ";
        cin>>size;
        cout<<"\n";
        BankAccount holder[size];
        holder[0].init(holder, size);
        cout<<"\n\n";
        holder[0].display(holder, size);
        cout<<"\n\n"<<"Withdraw";
        holder[0].withdraw(holder, size);
        cout<<"\n\n"<<"Deposit";
        holder[0].deposit(holder, size);
        cout<<"\n\n";
        holder[0].display(holder, size);

        return 0;
    }
