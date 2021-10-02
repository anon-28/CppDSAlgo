#include <iostream>
using namespace std;

/**
 * @brief sum of  n natural numbers using recursion
 *
 * @param inputNumber number
 * @return int summation
 */
int recursiveSummation(int inputNumber) {
    if (inputNumber <= 1) return inputNumber;
    return inputNumber + recursiveSummation(inputNumber - 1);
}


int main(int argc, char const* argv[]) {
    cout << recursiveSummation(10) << endl;
    return 0;
}
