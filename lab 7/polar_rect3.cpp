#include<iostream>
#include<Math.h>
using namespace std;
class Rectangular;
class Polar
{
    float radius,angle;
public:
    Polar(float r=0,float a=0)
    {
        radius=r;
        angle=a;
    }
    Polar(Rectangular R);
    float getradius()
    {
        return radius;
    }
    float getangle()
    {
        return angle;
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

    Rectangular(float x=0.0,float y=0.0)
    {
        xco=x;
        yco=y;
    }
    Rectangular(Polar P);
    float getx()
    {
        return xco;
    }
    float gety()
    {
        return yco;
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
Polar::Polar(Rectangular R)
{
    float x=R.getx();
    float y=R.gety();
    radius=sqrt(x*x+y*y);
    angle=atan(y/x)*180/3.14159265;
}
Rectangular::Rectangular(Polar P)
{
    float angle=P.getangle();
    float radius=P.getradius();
    angle=angle*3.14159265/180;
    xco=radius*cos(angle);
    yco=radius*sin(angle);
}
int main()
{
    Polar p;
    p.enter();
    p.display();
    Rectangular r(p);
    r.display();
    Polar p1(r);
    p1.display();
    Rectangular r1;
    r1.enter();
    r1.display();
    Polar p2(r1);
    p2.display();
}
