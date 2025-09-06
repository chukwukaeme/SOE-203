#include <iostream>
using namespace std;

int main(){
    int age = 18; float price = 90.43; double pi = 3.14159; char grade = 'A'; bool isReady = true; string name = "Emma";
 
    cout << "Age: " << age <<endl; cout << "Price: " << price <<endl; cout << "Pi: " << pi <<endl; 
    cout << "Grade: " << grade <<endl; cout << "Is Ready: " << isReady <<endl; cout << "Name: " << name <<endl;

/*NOTE: You only return when you're done with the code.*/
/*This is for arithmetic*/

    int a = 2, b = 3, c = 4;
    cout <<"Addition:" <<(a + b) <<endl;
    cout <<"subtraction:" <<(b - a) <<endl;
    cout <<"Multiplication:" <<(a * b) <<endl;
    cout <<"Division:" <<(c / a) <<endl;
    cout <<"Modulus:" <<(c % a) <<endl;

    return 0;
}