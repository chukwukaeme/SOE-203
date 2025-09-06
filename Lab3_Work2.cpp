#include <iostream>
#include <cmath> //For M_PI (Pi constant)
using namespace std;

int main(){

    string name = "Ezepue Chukwukaeme Emmanuel"; 
    cout << "Name: "<< name <<endl;
    cout << "Reg Number: 20231371702" <<endl;

    int choice;
    double area;

    //Displaying the menu of shapes
    cout << "Choose a shape calculate the area. " <<endl;
    cout << "1. Circle "<<endl;
    cout << "2. Rectangle "<<endl;
    cout << "3. Triangle "<<endl;
    cout <<"Enter  your choice (1-3): ";
    cin >> choice;
    //Switch statement to calculate area based on the shapes selected
    switch (choice)
    {
    case 1:{
        //For circle, formula: area = pi*radius^2
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = M_PI*radius*radius; //M_PI gives the exact value of Pi
        cout << "The area of the circle is: "<<area<<endl;
        break;
    }
    case 2:{
        //For Rectangle, formula: area = length * breadth
        double length, breadth;
        cout <<"Enter a length: ";
        cin >> length;
        cout << "Enter a breadth: ";
        cin >>breadth;

        area = length * breadth;
        cout <<"The area of the rectangle is: "<<area<<endl;
        break;
    }
    case 3:{
        //For triangle, (base * height) / 2
        double base, height;
        cout << "Enter a base: ";
        cin>> base;
        cout << "Enter a height: ";
        cin >>height;

        area = (base*height)/2;
        cout <<"The area of the triangle is: "<<area<<endl;
        break;
    }
    default: {
        cout <<"Invalid Choice"<<endl;
    }
        break;
    }
    return 0;
}