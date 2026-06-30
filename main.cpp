#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Negative numbers kabhi palindrome nahi ho sakte
    if (num < 0) {
        cout << num << " is NOT a palindrome.\n";
        return 0; // Program ko yahan khatam kar do
    }

    int originalNum = num; // Original number ko save kar liya
    long long reversedNum = 0; // Reverse number store karne ke liye

    // Number ko ulta (reverse) karne ka simple loop
    while (num > 0) {
        int lastDigit = num % 10;                     // Sabse aakhri digit nikala
        reversedNum = (reversedNum * 10) + lastDigit; // Us digit ko reverse mein add kiya
        num = num / 10;                               // Aakhri digit ko number se hata diya
    }

    // Check agar ulta kiya hua number original ke barabar hai
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome.\n";
    } else {
        cout << originalNum << " is NOT a palindrome.\n";
    }

    return 0;
}
