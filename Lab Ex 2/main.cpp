/*
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^                              ^
^   LAB EXERCISE TWO CPP       ^
^                              ^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
*/
/* Que 1 = Write an overloaded function max that takes either two or three parameters of type double and
returns the largest of them.
*/
/*
#include <iostream>
using namespace std;
int x , y , z;
int sosi (double x , double y)
{
    if (x < y )
    {
          return y;
    }
    else
        return x;

}
int sosi (double x , double y , double z )
{
    if (x > y & x > z)
    {
        return x;
    }
    if  (x < y & y > z)
    {
        return y;
    }

    else
    {
        return z;
    }
}
int main()
{
    int x , y, z;

    cout << "How many numbers you want to find max 2 or 3 : "<<endl;
     int choose ;
     cin>> choose;
     if (choose == 2 ){
          cout << "Enter two  numbers to find max ";
          cin>> x >> y;
          cout << "The max of the number is "<<sosi(x , y);
     }
     else
      cout << "Enter three numbers to find max ";
      cin>> x >> y>> z;
      cout << "The max of the number is "<<sosi(x , y, z);
    return 0;
}
/*Que 2 = Write a function based program to find the square of integer and rational number. Use two function
of the same name that accept integer and double parameters by reference.*/
/*
#include <iostream>
using namespace std;
int num;
void square(int &num)
{
    num= num * num;
}
void square (double & num)
{
    num = num * num;
}
int main ()
{
    double intNum,doubleNum;
    cout << "Enter integer number:";
    cin>> intNum;
    square(intNum);
    cout << "The square of the integer is :"<< intNum;

    cout << endl<<endl;

    cout << "Enter rational number :";
    cin>> doubleNum;
    square(doubleNum);
    cout << "The square of the rational is :"<< doubleNum;

    return 0;
}*/
/*Que 3 = Write a program function based program that read the two sides of right angle triangle and find the
length of the third side. The function accepts the two sides as a parameter by value and third side by
reference and print inside main function.*/
/*
#include <iostream>
#include <cmath>
using namespace std;
double sosi(double s1, double s2, double& s3)
{
    s3 = sqrt(s1 * s1 + s2 * s2);
    return s3;
}

int main() {
    double s1, s2, s3;
    cout << "Enter the lengths of the two sides of the right-angled triangle: ";
    cin >> s1 >> s2;
   double result =  sosi(s1, s2, s3);

 cout << "The length of the third side is: " << s3<< endl;

    return 0;
}

/* 4. Develop a function based program that read an integer number and find the square, if it is -ve and otherwise square root.
    Define a function that accept the number as a parameter and return either the square or the square root.
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

int square(int num)
{
    int s = num * num;
    return s;
}

int main ()
{
    int num;
    cout << "Enter the number :";
    cin>>num;
    if (num < 0)
    {
        cout <<"The square of the number is :"<<square(num);
    }
    else
        cout << "The square root is :"<<sqrt(num);
    return 0;
}

/*
5. Write the C++ program for a void function that receives three double variables: the first two by
value and the last one by reference. Name the formal parameters n1, n2, and answer. The function
should divide the n1 variable by the n2 variable and then store the result in the answer variable.
Name the function calcQuotient. Also write an appropriate function prototype for the calcQuotient
function. In addition, write a statement that invokes the calcQuotient function, passing it the actual
parameters num1, num2, and quotient variables.
*/

#include <iostream>
using namespace std;

void calcQuotient(double n1 , double n2 , double &answer)
{
    answer = n1/n2;
}
int main ()
{
    double n1,n2,answer;
    cout <<"Enter three numbers : ";
    cin >> n1>>n2>>answer;


   calcQuotient( n1, n2, answer);

    cout << "The answer is : "<< answer;
    return 0;
}

// or
#include <iostream>
using namespace std;
void calcQuotient(double n1, double n2, double& answer) {
    if (n2 != 0) {
        answer = n1 / n2;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}
int main() {
    double num1, num2, quotient;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    calcQuotient(num1, num2, quotient);
    cout << "Quotient: " << quotient << endl;
    return 0;
}
