#include <iostream>

using namespace std;

// Carrie Clifton - G00199718
// CS265Data Structures - Palindrome Detection
//24 SEP 2024

#include <iostream>
#include <string>

using namespace std;

// Function prototype for the recursive palindrome check
bool isPalindrome(const string& str, int left, int right);

// Main function
int main() {
    // Prompt the user for a string input
    string input;
    cout << "Enter a word: ";
    getline(cin, input);

    // Call the recursive function to check if the input is a palindrome
    if (isPalindrome(input, 0, input.length() - 1)) {
        // Output if the string is a palindrome
        cout << input << " is a palindrome." << endl;
    } else {
        // Output if the string is not a palindrome
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}

// Recursive function to check if a string is a palindrome
bool isPalindrome(const string& str, int left, int right) {
    // Base case: If left index is greater than or equal to right index
    if (left >= right) {
        return true; // String is a palindrome
    }
    
    // Check if characters at left and right indices are the same
    if (str[left] != str[right]) {
        return false; // String is not a palindrome
    }

    // Recursive call to check the next pair of characters
    return isPalindrome(str, left + 1, right - 1);
}