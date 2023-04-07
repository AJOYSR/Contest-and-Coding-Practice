#include<bits/stdc++.h>
using namespace std;
class shape
{
    public :
    double len;
    double wid;
    void setdata(double a,double b)
    {
        len = a;
        wid = b;
    }
    virtual void display_area()=0;



};
class triangle : public shape
{
    public :
    void display_area()
    {
        double ar = (len * wid)/2;
        cout << "Area of Triangle = " << ar <<endl;
    }
};
class rectangle : public shape
{
    public :
    void display_area()
    {
        double ar = (len * wid);
         cout << "Area of Rectangle = " << ar <<endl;
    }
};
int main()
{
     triangle t;
     t.setdata(3,4);
     t.display_area();
     /// Rectangle
     rectangle r;
     r.setdata(5,5);
     r.display_area();
}
