
#include <iostream>

using namespace std;

/**
 * Returns the sum of all even fibonacci numbers up to a threshold.
 * 
 * @param threshold The range (exclusive) of allowed numbers to be summed.
 * @return Sum of all even fibonacci numbers.
 */
int even_fibonacci_numbers(int threshold) {
    int a = 1;
    int b = 2;
    int sum = 0;
    while (b < threshold) {
        if (b % 2 == 0) {
            sum += b;
        }
        int temp = a;
        b = a + b;
        a = b - a;
    }
    return sum;
}

int main() {
    int threshold = 4000000;
    int sum = even_fibonacci_numbers(threshold);
    cout << sum;
    return 0;
}
