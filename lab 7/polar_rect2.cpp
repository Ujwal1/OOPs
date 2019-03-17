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
    friend Rectangular Pol2Rect(Polar p);
    friend Polar Rect2Pol(Rectangular R);
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
    friend Rectangular Pol2Rect(Polar p);
    friend Polar Rect2Pol(Rectangular R);
};
Rectangular Pol2Rect(Polar p)
{
    p.angle=p.angle*3.14159265/180;
    float x=p.radius*cos(p.angle);
    float y=p.radius*sin(p.angle);
    return Rectangular(x,y);
}
Polar Rect2Pol(Rectangular R)
{
    float r=sqrt(R.xco*R.xco+R.yco*R.yco);
    float a=atan(R.yco/R.xco)*180/3.14159265;
    return Polar(r,a);
}
int main()
{
    Polar p;
    p.enter();
    p.display();
    Rectangular r;
    r=Pol2Rect(p);
    r.display();
    p=Rect2Pol(r);
    p.display();
}
