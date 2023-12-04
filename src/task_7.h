#include <iostream>
using namespace std;
// Recursive function to calculate x raised to the power n
// Runtime Complexity: O(log(n))
double recursivePow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    double halfPow = recursivePow(x, n / 2);

    // If n is even, x^n = (x^(n/2))^2
    if (n % 2 == 0) {
        return halfPow * halfPow;
    } else {
        // If n is odd, x^n = x * (x^(n/2))^2
        return x * halfPow * halfPow;
    }
}

int task_7 () {
    double x;
    int n;
    cin >> x >> n;
    double result = recursivePow(x, n);
    cout << result << endl;

    return 0;
}