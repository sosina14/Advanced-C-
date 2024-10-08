/*
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^                              ^
^   LAB EXERCISE ONE CPP       ^
^                              ^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
*/
/* Que 1 Write a function based C++ program that find the Fibonacci series of a given number. Define a function
named fibonacci that has one argument with default argument and returns integer. The function is called both
with parameter and without parameter */


#include <iostream>
using namespace std;

int fibonaccii (int n)
{
   cout << "The fibonacci of 10 is : -> " ;
int first = 0 , second = 1 , next;
for (int i = 0 ; i < 10 ; i++)
{
    if (i <= 1 )
    {
        next = i;
    }
    else
         next = first + second ;
         first = second;
         second = next;
     cout << next << " ";
}
return next;
}
int Fibonacci(int n ) {
    cout << "Enter the number for fibonacci ";
    cin >>n;
    cout << "Fibonacci series of " << n << " is : \n";
int first = 0, second = 1, next;
 for (int i = 0; i < n; i++) {
 if (i <= 1) {
 next = i;
 } else
 {
next = first + second;
 first = second;
 second = next;
 }
cout << next << " ";}
 cout << endl;

return next;
}
int main ()
{
    fibonaccii(10);
    cout <<endl;
    int n;
 Fibonacci(n);
return 0;
}

/*
2. Write a program that print the right angle triangle pattern of minimum length 5 using ‘*’ as a default
symbols. The program should prompt the user to choose either to print default pattern or enter his/her own by
entering different symbol and size.
*/

#include <iostream>
using namespace std;

void printTriangle(char symbol = '*', int size = 5) {
 for (int i = 1; i <= size; i++) {
 for (int j = 1; j <= i; j++) {
cout << symbol << " ";}
 cout << endl; }
}

int main() {
char symbol;
int size;

cout << "Do you want to print the default pattern with '*' symbol? (Y/N): ";
 char choice;
cin >> choice;

if (choice == 'Y' || choice == 'y') {
printTriangle(); // Print default pattern with '*' symbol
} else {
 cout << "Enter the symbol you want to use: ";
 cin >> symbol;
 cout << "Enter the size of the triangle (minimum 5): ";
 cin >> size;

if (size < 5) {
size = 5;}
 printTriangle(symbol, size);
 // Print custom pattern with user-defined symbol and size
}

 return 0;
}

//# 3 Write a function based program to find the square of integer and rational number.
//Use two function of the same name that accept integer and double parameters by reference.
#include <iostream>
using namespace std;
void square(int & num) {
   num = num * num;
}
void square(double & num) {
   num = num * num;
}
int main() {
  int intNum;
  double doubleNum;
 cout << "Enter an integer: ";
 cin >> intNum;
 cout << "Enter a double (rational number): ";
 cin >> doubleNum;

square(intNum);
square(doubleNum);

cout << "Square of the integer: " << intNum << endl;
cout << "Square of the double: " << doubleNum << endl;

 return 0;
}
/* que 4
Write an application that read low & high temperature and find daily, weekly, and monthly average
temperature. Define two functions named tempFinder with no parameter and 1 integer parameter-length
respectively. The program should prompt the user to read number of days in a week and month inside main
function. Call the functions with and with out parameter.
*/
#include <iostream>
#include <vector>

using namespace std;

void tempFinder();
void tempFinder(int length);

int main() {
    int lowTemp, highTemp;
    int daysInWeek, daysInMonth;

    cout << "Enter the low temperature: ";
    cin >> lowTemp;
    cout << "Enter the high temperature: ";
    cin >> highTemp;

    cout << "Enter the number of days in a week: ";
    cin >> daysInWeek;
    cout << "Enter the number of days in a month: ";
    cin >> daysInMonth;

    tempFinder();
    tempFinder(daysInWeek);
    tempFinder(daysInMonth);

    return 0;
}

void tempFinder() {
    int dailyAvg = 0;
    cout << "Daily Average Temperature: " << (dailyAvg) / 1 << endl;
}

void tempFinder(int length) {
    int weeklyAvg = 0;
    for (int i = 1; i <= length; i++) {
        weeklyAvg += i;
    }
    cout << "Weekly Average Temperature: " << (weeklyAvg) / length << endl;

    int monthlyAvg = 0;
    for (int i = 1; i <= length; i++) {
        monthlyAvg += i;
    }
    cout << "Monthly Average Temperature: " << (monthlyAvg) / length << endl;
}
/* que 5 ,  Write a program that find a factorial of a number and also generate a Fibonacci series about it using
a) Loop
b) Function   */
#include <iostream>
using namespace std;
int fact (int n){
    if (n <= 1){
        return 1;
    }
    else
    return n * fact(n - 1);
}
int fiobacci(int n ){
     int f = 0 , s = 1 , next;
    for (int i = 0 ; i < n ; i++){
        if (i <= 1){
            next = i;
        }
        else {
            next = f + s ;
            f = s;
            s = next;
        }
        cout << next << " ";
    }
    return next;

}
int main(){
    int f, n;
    cout << "Enter the number for factorial & Fibonacci series :"; cin >> n;
  f=  fact (n);
    cout<< "factorial of a number is :"<< f;

cout << endl<<endl;

cout << "Fibonacci series of " << n << " is : \n";
fiobacci(n);
    return 0;
}
