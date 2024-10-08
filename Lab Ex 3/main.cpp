/*
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^                              ^
^ LAB EXERCISE Three CPP 2     ^
^                              ^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
*/
/*
1. Given a structure a specification to store the details of 10 students
(roll_no, name, marks in five subject, BoD which it’s type is Date struct),
write a program to input each students detail using function and perform the following;
a) Compute average score for each student and print the students’ details in tabular format along with their scores
b) Determine and print students details who scored average mark below 50.
*/
#include <iostream>
using namespace std;
struct Date {
    int day, month, year;
};
struct Student {
    int rollno;
    string name;
    int marks[3];
    Date BoD;
};
void Details(Student &student) {
    cout << "Enter roll number: ";
    cin >> student.rollno;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, student.name);

     cout << "Enter Date of Birth (DD MM YYYY): ";
    cin >> student.BoD.day >> student.BoD.month >> student.BoD.year;

    cout << "Enter marks in three subjects: ";
    for (int i = 0; i < 3; ++i) {
        cin >> student.marks[i];
    }
}
void tDetails(Student students[], int n) {

    cout << "Roll No\tName\tAverage Score" << endl;
    for (int i = 0; i < n; ++i) {
        int total = 0;
        for (int j = 0; j < 3; ++j) {
            total += students[i].marks[j];
        }
        double average = total / 3.0;
        cout << students[i].rollno << "\t" << students[i].name << "\t" << average << endl;
    }
}
int main() {
    const int num_students = 3;

    Student students[num_students];

    for (int i = 0; i < num_students; ++i) {

        cout << "Enter details for student " << i + 1 << ":" << endl;

        Details(students[i]);
    }
    tDetails(students, num_students);

    return 0;
}

/*  2. Write a program to print the area of a rectangle by creating a class named 'Area' having two functions.
First function named as 'setDim' takes the length and width of the rectangle as parameters and the second
 function named as 'getArea' returns the area of the rectangle.
  Length and width of the rectangle are entered through keyboard.
*/
// teacher worked
 #include <iostream>
 using namespace std;

  class area {
      int ll,mm ;
      public:
      int setDim ( int l,int w)
      {
          ll = l ;
          mm = w ;
         return ll * mm;
      }
      int getArea (int l)
  };

  int main (){
      int  l , w, a ;
     area xx ;
     cout << "Enter length : ";
     cin>> l;
     cout << "Enter width  : ";
     cin >> w;

     cout << " THE AREA IS : "<< xx.setDim (l , w );

  return 0;
  }
/*  3. Write a C++ program that that can calculate the quadratic equation using
 a) structure
 b) class



*/

/* 4 Show how to declare Real as a synonym for float (float and Real can be used interchangeably). */

/*
5. Show how to declare the following constants using an enum statement:
WINTER =1, SPRING = 2, SUMMER = 3 and FALL = 4.
6. Provide an example that demonstrate the use of enum in defining flags
*/
