#haahuu
#include<iostream>
using namespace std;
class Distance
{
public:
    int km,meter;
};
template <class T,class T2>
void sorting (T a,T2 b)
{
    //cout << "test"<<endl;
    for(int i=0;i<b;i++)
    {
        //cout << "test2"<<endl;
        for(int j=0;j<(b-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                float t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
template <class T,class T2>
void enter (T a,T2 b)
{
    for(int i=0;i<b;i++)
    {
            cin >> a[i];
    }
}
template <class T,class T2>
void enter2 (T a,T2 b)
{
    for(int i=0;i<b;i++)
    {
            cin >> a[i].km>>a[i].meter;
    }
}
template <class T,class T2>
void display (T a,T2 b)
{
    for(int i=0;i<b;i++)
    {
            cout << a[i] << " ";
    }
    cout <<endl;
}
template <class T,class T2>
void display2 (T a,T2 b)
{
    for(int i=0;i<b;i++)
    {
            cout << a[i].km << " kms and "<<a[i].meter<< " meters"<<endl;
    }
    cout <<endl;
}
int main()
{
    int ch;
    int b=5;
    do
    {
        cout << "1 - Integer" <<endl;
        cout << "2 - Float" <<endl;
        cout << "3 - String" <<endl;
        cout << "4 - User defined" <<endl;
        cout << "5 - Exit" <<endl;
        cin >> ch;
        switch(ch)
        {
        case 1:
                int a[b];
                cout << "Enter array elements"<<endl;
                enter(a,b);
                cout << "The entered array is: ";
                display(a,b);
                sorting(a,b);
                cout << "The sorted array is: ";
                display(a,b);
                break;
        case 2:
                float a1[b];
                cout << "Enter array elements"<<endl;
                enter(a1,b);
                cout << "The entered array is: ";
                display(a1,b);
                sorting(a1,b);
                cout << "The sorted array is: ";
                display(a1,b);
                break;
        case 3:
                char a2[b];
                cout << "Enter array elements"<<endl;
                enter(a2,b);
                cout << "The entered array is: ";
                display(a2,b);
                sorting(a2,b);
                cout << "The sorted array is: ";
                display(a2,b);
                break;
        case 4: //cout << "This feature is under development"<<endl;
                Distance d[b];
                enter2(d,b);
                display2(d,b);
                break;
        case 5: cout << "Exiting"<<endl;
                break;
        default:cout << "Wrong Choice";
                break;
        }
    }while(ch!=5);
}
