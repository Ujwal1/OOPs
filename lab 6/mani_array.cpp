#include<iostream>
using namespace std;
class mani_array
{
private:
    int n;
    //hahahuhu
    int *arr;;
public:
    mani_array()
    {
        n=100;
        arr=new int[n];
    }
    void enter(int n)
    {
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
    }
    void display(int n)
    {
        for(int i=0;i<n;i++)
        {
            cout << arr[i]<<" ";
        }
        cout << endl;
    }
    bool operator ==(mani_array a3)
    {
        bool ret=False;
        //cout << n1 <<" "<< n2<<endl;
        return
    }
};
int main()
{
    mani_array a1,a2;
    int n;
    cout << "Enter length of 1st array:"<<endl;
    cin >> n;
    a1.enter(n);
    a1.display(n);
    cout << "Enter length of 2nd array:"<<endl;
    cin >> n;
    a2.enter(n);
    a2.display(n);
    if(a1==a2)
    {
        cout << "Equal"<<endl;
    }
    else
    {
        cout << "Not Equal"<<endl;
    }
}
