#include<iostream>
#include<Math.h>
using namespace std;
class Rectangular;
class Polar
{
    float radius,angle;
public:
    operator Rectangular();
    Polar(float r=0,float a=0)
    {
        radius=r;
        angle=a;
    }
    void enter()
    {
        cout << "Enter radius and angle"<<endl;
        cin >> radius;
        cin >> angle;
    }
    void display()
    {
        cout << "Radius: "<<radius<<endl;
        cout << "Angle: "<<angle<<endl;
    }
};
class Rectangular
{
    float xco,yco;
public:
    operator Polar();
    Rectangular(float x=0,float y=0)
    {
        xco=x;
        yco=y;
    }
    void enter()
    {
        cout << "Enter x and y"<<endl;
        cin >> xco >> yco;
    }
    void display()
    {
        cout << "X coordinate: "<<xco<<endl;
        cout << "Y coordinate: "<<yco<<endl;
    }
};
Polar::operator Rectangular()
{
    angle=angle*3.14159265/180;
    float x=radius*cos(angle);
    float y=radius*sin(angle);
    //cout << x << "\t" << y<< endl;
    return Rectangular(x,y);
}
Rectangular::operator Polar()
{
    float r=sqrt(xco*xco+yco*yco);
    float a=atan(yco/xco)*180/3.14159265;
    return Polar(r,a);
}
int main()
{
    Polar p;
    p.enter();
    p.display();
    Rectangular r;
    r=Polar(p);
    r.display();
    p=Rectangular(r);
    p.display();
    /*Rectangular r1;
    r1.enter();
    r1.display();
    Polar p1;
    p1=Rectangular(r1);
    p1.display();*/


}
