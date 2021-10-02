#include <iostream>
using namespace std;

/**
 * @brief reverse the given string using recursion
 *
 * @param input string
 * @return string reversed
 */
string reverseString(string input) {
    // Base case
    if (input == "") {
        return "";
    }

    // what is the smallest amount of work I can do in each iteration
    return reverseString(input.substr(1)) + input[0];
}


int main() {
    string s = "Hello World!";
    cout << reverseString(s) << endl;

    return 0;
}
