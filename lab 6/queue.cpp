#include<iostream>
using namespace std;
class queue
{
private:
    int arr[50],tail=0;
public:
    void operator +(int val)
    {
        arr[tail]=val;
        tail=tail+1;
    }
    void operator -()
    {
        cout << "Popped value: "<<arr[0]<<endl;
        for(int i=0;i<tail;i++)
        {
            arr[i]=arr[i+1];
        }
        tail=tail-1;
    }
    void display()
    {
        cout << "The queue is :";
        for(int i=0;i<tail;i++)
        {
            cout << arr[i]<<"   ";
        }
        cout << endl;
    }
};
int main()
{
    queue q;
    int ch;
    do
    {
        cout << "1- Insert" <<endl;
        cout << "2- Delete" <<endl;
        cout << "3- display" <<endl;
        cout << "4- Exit" <<endl;
        cin >> ch;
        switch(ch)
        {
            case 1:int val;
                    cout << "Enter value"<<endl;
                    cin >> val;
                    q+val;
                    break;
            case 2: -q;
                    break;
            case 3:q.display();
                    break;
            case 4: cout << "Exiting"<<endl;
        }
    }while(ch!=4);
}//end of main
