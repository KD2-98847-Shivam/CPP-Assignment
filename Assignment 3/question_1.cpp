#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;

    static const double PI;

public:

    Cylinder() : radius(0), height(0)
    {
    }

    Cylinder(double r, double h) : radius(r), height(h)
    {
    }

    double getRadius()
    {
        return radius;
    }

    void setRadius(double r)
    {
        radius = r;
    }

    double getHeight()
    {
        return height;
    }

    void setHeight(double h)
    {
        height = h;
    }

    double calculateVolume()
    {
        return PI * radius * radius * height;
    }
};

const double Cylinder::PI = 3.14;


int main()
{
    Cylinder c1(5, 10);

    cout << "Radius : " << c1.getRadius() << endl;
    cout << "Height : " << c1.getHeight() << endl;
    cout << "Volume : " << c1.calculateVolume() << endl;

    return 0;
}
