#include <iostream>
using namespace std;

int main(){

    string name = "Ezepue Chukwukaeme Emmanuel"; 
    cout << "Name: "<< name <<endl;
    cout << "Reg Number: 20231371702" <<endl;

    //To request a number from someone
    int num;
    cout <<"Enter a number: ";
    cin >> num;

    //To use modulus to know if it even or odd
    if (num %2 == 0){
        cout << "It is an even number"<<endl;
    }else {
        cout <<"It is an odd number"<<endl;
    }
    return 0;
}