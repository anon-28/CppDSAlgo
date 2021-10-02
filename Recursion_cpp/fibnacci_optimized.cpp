#include <iostream>
#include <unordered_map>

using namespace std;
unordered_map<long, long> memo;


/**
 * @brief nth fibnacci number (optimized with memorization)
 *
 * @param n
 * @return long
 */
long fib(long n) {
    if (memo.find(n) != memo.end()) return memo[n];
    if ((n == 0) || (n == 1)) memo[n] = n;
    else
        memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main(int argc, char const* argv[]) {
    cout << fib(5) << endl;
    cout << fib(6) << endl;
    cout << fib(7) << endl;
    cout << fib(50) << endl;
    return 0;
}
