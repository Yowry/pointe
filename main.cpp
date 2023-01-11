#include <iostream>
#include<cmath>
using namespace std;

  class Point
{
public:

    double X;
    double Y;
    
    Point() //add new constructer cuz we need to add & subtract
    {
        X = 0.0;
        Y = 0.0;
    }
    
    Point(double x,double y) 
    {
        X = x;
        Y = y;
    }
    
    double getX()
    {
        return X;
        return Y;
    }
    
    double getY()
    {
        return Y;
    }
    
    void setX (double x)
    {
        X = x;
    }
    void setY(double y)
    {
        Y = y;
    }

    double distanceTo(const Point& other) //we will perform the calculations
    {
        double sx= other.X - X;
        double sy= other.Y - Y;
        return ( sx*sx + sy*sy );
    }

    Point operator+(const Point & other) // the calculate for sum
    {
        Point other1;
        other1.X = other.X + X;
        other1.Y = other.Y + Y;
        return other1;
    }
    
    Point operator-(const Point& other) // the calculate for subtract
    {
        Point other2;
        other2.X = other.X - X;
        other2.Y = other.Y - Y;
        return other2;

    }

    ~Point() //add the destructer 
    {
        cout<< "thank you for using my code (:"<<endl;
    }

};
int main()
{  //firstly we need write the coordinates
    Point p1(1,2);
    cout << "p1= " << p1.X << " . " << p1.Y << endl;
    Point p2(3,4);
    cout << "p2= " << p2.X << " . " << p2.Y << endl;

    //now we do the calculations
    double s = p1.distanceTo(p2);
    Point p3 = p1 + p2;
    cout << "p3= " << p3.X << " . " << p3.Y << endl;
    Point p4 = p1 - p2;
    cout << "p4= " << p4.X << " . " << p4.Y << endl;
}