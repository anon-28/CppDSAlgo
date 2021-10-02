#include <iostream>
using namespace std;


/**
 * @brief Convert decimal number into binary string
 *
 * @param decimal number
 * @param result string to hold result
 * @return string binary representation
 */
string findBinary(int decimal, string result) {
    if (decimal == 0) return result;
    result = to_string(decimal % 2) + result;
    return findBinary(decimal / 2, result);
}


int main() {
    cout << findBinary(233, "") << endl;
    return 0;
}
