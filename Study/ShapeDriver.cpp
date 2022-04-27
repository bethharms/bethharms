#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
 Rectangle r1(1,1);
 Triangle t1(3,3,4,1);
 Triangle t2(1,1,9,2);
 Circle c1(5, "Circle 1");


 vector<Shape*> myshapes{&r1,&t1,&t2,&c1};


for (int i = 0 ; i<4 ; i++)
{
    cout << myshapes[i]->get_name() << endl;
    cout << myshapes[i]->get_area() << endl;
}   

}