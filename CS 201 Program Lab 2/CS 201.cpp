
 //Name: Meher Sasmith Kaligatla
 //Program 1 – Numbers

#include <iostream>
#include <algorithm> // For sorting
using namespace std;

int main() {
    // Variables
    double num1, num2, num3, num4;
    char continueLoop;

    do {
        // Prompt user for 4 numbers
        cout << "Enter 4 numbers (separated by spaces): ";
        cin >> num1 >> num2 >> num3 >> num4;

        // Calculate largest number
        double largest = max({ num1, num2, num3, num4 });
        cout << "The largest number is: " << largest << endl;

        // Calculate smallest number
        double smallest = min({ num1, num2, num3, num4 });
        cout << "The smallest number is: " << smallest << endl;

        // Calculate average
        double average = (num1 + num2 + num3 + num4) / 4.0;
        cout << "The average of the numbers is: " << average << endl;

        // Store numbers in an array for sorting
        double numbers[4] = { num1, num2, num3, num4 };

        // Sort numbers in increasing order
        sort(numbers, numbers + 4);
        cout << "Numbers in increasing order: ";
        for (int i = 0; i < 4; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;

        // Sort numbers in decreasing order
        sort(numbers, numbers + 4, greater<double>());
        cout << "Numbers in decreasing order: ";
        for (int i = 0; i < 4; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;

        // Ask user if they want to continue
        cout << "Do you want to continue? (y/n): ";
        cin >> continueLoop;

    } while (continueLoop == 'y' || continueLoop == 'Y');

    cout << "Thank you for using the program!" << endl;
    return 0;
}