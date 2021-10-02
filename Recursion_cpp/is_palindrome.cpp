#include<iostream>

using namespace std;

/**
 * @brief check if string is palidrome or not
 *
 * @param input string
 * @return true when string is palindrome
 * @return false when string is not palindrome
 */
bool isPalindrome(string input) {
    if (input.length() == 0 || input.length() == 1)
        return true;

    if (input[0] == input[input.length() - 1]) {
        return isPalindrome(input.substr(1, input.length() - 2));
    }
    return false;
}

int main() {
    cout << isPalindrome("Hello") << endl;
    cout << isPalindrome("naman") << endl;

    return 0;
}
