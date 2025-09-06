#include <iostream>
using namespace std;

int main(){

    string name = "Ezepue Chukwukaeme Emmanuel"; 
    cout << "Name: "<< name <<endl;
    cout << "Reg Number: 20231371702" <<endl;
    
    int year;
    //I ask the user to input a year
    cout << "Enter a year: ";
    cin >> year;

    //To check if the year is divisible by 4
    if(year % 4 == 0){
        //If it is divisible by 4, check if it is divisible by 100
        if(year % 100 == 0){
            //If divisible by 100, then it must be divisible by 400
            if (year % 400 == 0){
            } 
        }cout << "It is a leap year" <<endl;
    }else {
        cout << "It is not a leap year"<<endl;
    }
    return 0;
}