//To check if a number is even or odd
//For if-else statement
#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0){cout << num << " is Even." <<endl;}
    else {cout << num << " is Odd." <<endl;}

/*Days of the week
Using switch*/

    int day;
        cout << "Enter a number (1 -7) for the day of the week: ";
        cin >> day;

        switch (day){
            case 1: cout << "Sunday" << endl; break;
            case 2: cout << "Monday" << endl; break;
            case 3: cout << "Tuesday" << endl; break;
            case 4: cout << "Wednesday" << endl; break;
            case 5: cout << "Thursday" <<endl; break;
            case 6: cout << "Friday" <<endl; break;
            case 7: cout << "Saturday" <<endl; break;
            default: cout <<"Invalid day" << endl;
        }

/*Using Loops
For Loop. A For Loop is used when the number of iteration is known beforehand */

    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i){
        sum += i;
    }
    cout << "The sum of the first " << n << " natural numbers is " << sum << "." << endl;

    /*While Loop. A While Loop continues to execute as long as its  condition is true*/

    int numb, reverse = 0;
    cout << "Enter a number (10 and above): ";
    cin >> numb;
    
    while (numb != 0){
        reverse = reverse * 10 +  numb % 10;
        //You can also name a variable like remain = numb % 10
        //Then write line 53 as reverse = reverse * 10 + remain
        numb /= 10;
    }
    cout << "Reversed Number: " << reverse << endl;
    
    /*Do-While Loop. A do-while loop executes its block at least once and then repeats as long as its condition is true*/

    int number = 42, guess;

    do{
        cout << "Guess the number: ";
        cin >> guess;

        if (guess < number){
            cout << "Too Low" << endl;}
        else if (guess > number){
            cout << "Too High" << endl;}
        else {
            cout << "You guessed correctly" << endl;}
    }while (guess != number);
return 0;
}