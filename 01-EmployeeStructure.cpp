/*
a structure Employee with members: empid, name, age, salary and address. Define functions
•	to enter the record for 5 employees, 
•	to display the record of all the employees.
•	to search and display the record by name as well as by empid. 
•	to update the salary of the employee. 
*/
#include <iostream>
#include <malloc.h>
#include <strings.h>

using namespace std;

typedef struct Employee {
    int empid;
    char name[100];
    int age;
    int salary;
    char address[1000];
} employee;

void enter(employee *emp, int size) {
    int i;
    for(i = 0; i < size; i++) {
        cout<<"Enter Employee Id: ";
        cin>>emp[i].empid;
        cout<<"Enter Name: ";
        cin>>emp[i].name;
        cout<<"Enter Age: ";
        cin>>emp[i].age;
        cout<<"Enter Salary: ";
        cin>>emp[i].salary;
        cout<<"Enter Address: ";
        cin>>emp[i].address;
        cout<<"\n";
    }
}

void display(employee *emp, int size) {
    int i;
    for(i = 0; i < size; i++) {
        cout<<"Employee Id: "<<emp[i].empid<<"\n";
        cout<<"Name: "<<emp[i].name<<"\n";
        cout<<"Age: "<<emp[i].age<<"\n";
        cout<<"Salary: "<<emp[i].salary<<"\n";
        cout<<"Address: "<<emp[i].address<<"\n";
        cout<<"\n";
    }
}

void searchByName(employee *emp, int size) {
    char name[100];
    int i;
    cout<<"Enter Employee Name to find: ";
    cin>>name;
    for(i = 0; i < size; i++) {
        if(strcasecmp(name, emp[i].name) == 0) {
            cout<<"Employee Id: "<<emp[i].empid<<"\n";
            cout<<"Name: "<<emp[i].name<<"\n";
            cout<<"Age: "<<emp[i].age<<"\n";
            cout<<"Salary: "<<emp[i].salary<<"\n";
            cout<<"Address: "<<emp[i].address<<"\n";
            cout<<"\n";
            return;
        }
    }
    cout<<"Employee not found\n";
}

void searchById(employee *emp, int size) {
    int id, i;
    cout<<"Enter Employee Id to find: ";
    cin>>id;
    for(i = 0; i < size; i++) {
        if(id == emp[i].empid) {
            cout<<"Employee Id: "<<emp[i].empid<<"\n";
            cout<<"Name: "<<emp[i].name<<"\n";
            cout<<"Age: "<<emp[i].age<<"\n";
            cout<<"Salary: "<<emp[i].salary<<"\n";
            cout<<"Address: "<<emp[i].address<<"\n";
            cout<<"\n";
            return;
        }
    }
    cout<<"Employee not found\n";
}

void updateSalary(employee *emp, int size) {
    int id, salary, i;
    cout<<"Enter Employee Id to Update Salary: ";
    cin>>id;
    cout<<"Enter new Salary: ";
    cin>>salary;
    for(i = 0; i < size; i++) {
        if(id == emp[i].empid) {
            emp[i].salary = salary;
            return;
        }
    }
    cout<<"Employee not found\n";
}

int main() {
    int size;
    cout<<"No. of Employees: ";
    cin>>size;
    employee *emp = (employee *) malloc(sizeof(employee) * size);
    enter(emp, size);
    display(emp, size);
    searchByName(emp, size);
    searchById(emp, size);
    updateSalary(emp, size);
    display(emp, size);
    return 0;
}
