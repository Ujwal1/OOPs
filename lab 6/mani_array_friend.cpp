#include<iostream>
using namespace std;
class mani_array
{
private:
    int n;
    int m;
    int **arr;
public:
    mani_array(int N,int M)
    {
        n=N;
        m=M;
        arr=new int*[n];
    }
    void enter()
    {
        for(int i=0;i<n;i++)
        {
            arr[i]=new int[m];
            for(int j=0;j<m;j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout << arr[i][j]<<" ";
            }
            cout << endl;
        }
        cout << endl;
    }
    friend bool operator ==(mani_array a1,mani_array a2)
    {
        bool ret=0;
        if(a1.n==a2.n && a1.m==a2.m)
        {
            for(int i=0;i<a1.n;i++)
            {
                for(int j=0;j<a1.m;j++)
                {
                    if(a1.arr[i][j]!=a2.arr[i][j])
                    {
                        return ret;
                    }
                }

            }
            return 1;
        }
        return ret;
    }
    bool comp(mani_array a2)
    {
        bool ret=0;
        if(n==a2.n&&m==a2.m)
            return 1;
        return ret;
    }
    mani_array operator =(mani_array a2)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=a2.arr[i][j];
            }
        }
        return a2;
    }
};
int main()
{
    int n,m;
    cout << "Enter length of 1st array:"<<endl;
    cin >> n;
    cin >> m;
    cout << "Enter array"<<endl;
    mani_array a1(n,m);
    a1.enter();
    a1.display();
    cout << "Enter length of 2nd array:"<<endl;
    cin >> n;
    cin >> m;
    cout << "Enter array"<<endl;
    mani_array a2(n,m);
    a2.enter();
    a2.display();
    if(a1==a2)
    {
        cout << "Equal"<<endl;
    }
    else
    {
        cout << "Not Equal"<<endl;
        if(a1.comp(a2))
        {
            a2=a1;
            a1.display();
            cout << "copied array " <<endl;
            a2.display();
        }
        else
        {
            cout << "Array cannot be copied"<<endl;
        }
    }
}
