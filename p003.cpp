
#include <iostream>
#include <cmath>

using namespace std;

/**
 * Returns the largest prime factor of a specified number.
 * 
 * @param num The number whose largest prime factor is returned.
 * @return The largest prime factor.
 */
int largest_prime_factor(long long int num)
{
    long long int lpf = 0;
    
    // Divides num by 2 as many times as possible
    while (num % 2 == 0) {
        lpf = 2;
        num /= 2;
    }

    // Divides num by 3 as many times as possible
    while (num % 3 == 0) {
        lpf = 3;
        num /= 3;
    }

    // Iterate only for integers who do not have a prime factor of 2 or 3
    for (int i=5; i <= sqrt(num); i += 6) {
        while (num % i == 0) {
            lpf = i;
            num /= i;
        }
        while (num % (i+2) == 0) {
            lpf = i+2;
            num /= (i+2);
        }
    }

    if (num > 4) {
        lpf = num;
    }

    return lpf;
}

int main()
{
    long long int n = 600851475143;
    int lpf = largest_prime_factor(n);
    cout << lpf;
    return 0;
}
