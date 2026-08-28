#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;

    static const double PI;

public:

    // Default constructor
    Cylinder() : radius(0), height(0)
    {
    }

    // Parameterized constructor
    Cylinder(double r, double h) : radius(r), height(h)
    {
    }

    // Getter
    double getRadius()
    {
        return radius;
    }

    // Setter
    void setRadius(double r)
    {
        radius = r;
    }

    // Getter
    double getHeight()
    {
        return height;
    }

    // Setter
    void setHeight(double h)
    {
        height = h;
    }

    // Calculate volume
    double calculateVolume()
    {
        return PI * radius * radius * height;
    }
};

// Initialize static variable
const double Cylinder::PI = 3.14;


int main()
{
    Cylinder c1(5, 10);

    cout << "Radius : " << c1.getRadius() << endl;
    cout << "Height : " << c1.getHeight() << endl;
    cout << "Volume : " << c1.calculateVolume() << endl;

    return 0;
}