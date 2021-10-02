#include <iostream>

using namespace std;

/**
 * @brief nth fibnacci number
 *
 * @param n
 * @return long
 */
long fib(long n) {
    if ((n == 0) || (n == 1)) return n;
    else return fib(n - 1) + fib(n - 2);
}

int main(int argc, char const* argv[]) {
    cout << fib(5) << endl;
    return 0;
}
