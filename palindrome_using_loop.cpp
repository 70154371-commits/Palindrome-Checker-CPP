#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Negative numbers cannot be palindromes
    if (num < 0) {
        cout << num << " is NOT a palindrome.\n";
        return 0; // Terminate the program early
    }

    int originalNum = num;       // Store the original number for final comparison
    long long reversedNum = 0;   // Variable to store the reversed number safely

    // Loop to reverse the digits of the number
    while (num > 0) {
        int lastDigit = num % 10;                     // Extract the last digit
        reversedNum = (reversedNum * 10) + lastDigit; // Append the digit to the reversed number
        num = num / 10;                               // Remove the last digit from the number
    }

    // Check if the original number matches the reversed number
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome.\n";
    } else {
        cout << originalNum << " is NOT a palindrome.\n";
    }

    return 0;
}
