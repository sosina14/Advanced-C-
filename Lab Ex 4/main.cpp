/*
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^                              ^
^ CPP 2     LAB EXERCISE FOUR  ^
^                              ^
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
*/
/*
Write a C++program that uses a structure for storing a stock name, its estimated earnings per
share, and its estimated price-to-earnings ratio. Have the program prompt the user to enter these items for
three different stocks, each time using the same structure to store the entered data. When data has been
entered for a particular stock, have the program compute and display the anticipated stock price based on
the entered earnings and price-per-earnings values. For example, if a user enters the data XYZ, 1.56, 12, the
anticipated price for a share of XYZ stock is (1.56) × (12) = $18.72.
*/
/*
#include <iostream>

using namespace std;

struct Stock {

    string name;
    double earningsPerShare;
    double priceToEarningsRatio;

};

int main() {
    Stock stocks[3];
    for (int i = 0; i < 3; ++i) {
        cout << "Enter stock name: ";
        cin >> stocks[i].name;
        cout << "Enter estimated earnings per share: ";
        cin >> stocks[i].earningsPerShare;
        cout << "Enter estimated price-to-earnings ratio: ";
        cin >> stocks[i].priceToEarningsRatio;
    }

    for (int i = 0; i < 3; ++i) {
        double anticipatedPrice = stocks[i].earningsPerShare * stocks[i].priceToEarningsRatio;
        cout << "Anticipated price for a share of " << stocks[i].name << " stock is: $" << anticipatedPrice << endl;
    }

    return 0;
}


/* Que 2. Write a structure to store the name, account number and balance of customers (more than 10) and store
their information.
a - Write a function to print the names of all the customers having balance less than $200.
b - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance
and then print the incremented value of their balance. */
/*
#include <iostream>
#include <string>
using namespace std;


struct Customer {
    string name;
    int accountNumber;
    double balance;
};


void printCustomersWithLowBalance(Customer customers[], int size) {
    cout << "Customers with balance less than $200:\n";
    for (int i = 0; i < size; ++i) {
        if (customers[i].balance < 200) {
            cout << customers[i].name << endl;
        }
    }
}


void add100ToHighBalanceCustomers(Customer customers[], int size) {
    cout << "\nUpdated balances of customers with balance more than $1000 after adding $100:\n";
    for (int i = 0; i < size; ++i) {
        if (customers[i].balance > 1000) {
            customers[i].balance += 100;
            cout << customers[i].name << ": $" << customers[i].balance << endl;
        }
    }
}

int main() {
    const int numCustomers = 15;
    Customer customers[numCustomers] = {
        {"Alice", 1001, 150},
        {"Bob", 1002, 1200},
        {"Charlie", 1003, 180},
        {"David", 1004, 220},
        {"Emma", 1005, 1300},
        {"Frank", 1006, 950},
        {"Grace", 1007, 170},
        {"Henry", 1008, 1050},
        {"Ivy", 1009, 160},
        {"Jack", 1010, 1120},
        {"Kate", 1011, 1150},
        {"Liam", 1012, 990},
        {"Mia", 1013, 2200},
        {"Noah", 1014, 700},
        {"Olivia", 1015, 1400}
    };

    printCustomersWithLowBalance(customers, numCustomers);
    add100ToHighBalanceCustomers(customers, numCustomers);

    return 0;
}
*/


