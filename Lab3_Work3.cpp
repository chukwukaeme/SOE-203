#include <iostream>
using namespace std;

int main(){

    string name = "Ezepue Chukwukaeme Emmanuel"; 
    cout << "Name: "<< name <<endl;
    cout << "Reg Number: 20231371702" <<endl;

    int number;
    //Ask the user for a number
    cout << "Enter a number to display multiplication table: ";
    cin >> number;

    //Display the multiplication table using a for loop
    cout << "Multiplication table of " <<number<< "is: "<<endl;

    for (int i =1; i <= 12; i++){
        cout << number << " X " << i << " = " << number * i <<endl;
    }
    return 0;
}