
#include <iostream>
#include <vector>

using namespace std;

/**
 * The sieve of eratosthenes is an algorithm to find all primes smaller than a
 * specified threshold.
 * 
 * @param threshold Specified threshold
 * @return Vector of prime numbers
*/
vector<int> sieve_of_eratosthenes(int threshold)
{
    vector<bool> isPrimes(threshold, true);
    isPrimes[0] = isPrimes[1] = false;

    for (int i = 2; i < threshold; i++) {
        if (isPrimes[i]) {
            long long j = (long long) i * i;
            while (j < threshold) {
                isPrimes[j] = false;
                j += i;
            }
        }
    }

    vector<int> primes;
    for (int i = 0; i < isPrimes.size(); i++) {
        if (isPrimes[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

/**
 * Computes the sum of all prime numbers below a specified threshold.
 * 
 * @param threshold Specified threshold
 * @return Sum of prime numbers
*/
long long summation_of_primes(int threshold)
{
    long long sum = 0;
    vector<int> primes = sieve_of_eratosthenes(threshold);

    for (auto iter = primes.begin(); iter != primes.end(); iter++) {
        sum += *iter;
    }

    return sum;
}

int main()
{
    int threshold = 2000000;
    cout << summation_of_primes(threshold);
    return 0;
}
