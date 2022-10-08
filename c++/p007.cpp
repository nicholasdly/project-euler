
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

/**
 * Implementation of the sieve of eratosthenes, an algorithm that can
 * efficiently calculate prime numbers between one and ten million. It has been
 * slightly modifed to fit this specific scenario.
 * 
 * @param upperbound The upperbound of the sieve search range.
 */
vector<int> sieve_of_eratosthenes(int upperbound) {
    vector<bool> prime_bools(upperbound+1, true);
    prime_bools[0] = prime_bools[1] = false;

    for (int p=2; p*p <= upperbound; p++) {
        if (prime_bools[p] == true) {
            for (int i= p * p; i <= upperbound; i += p) {
                prime_bools[i] = false;
            }
        }
    }

    vector<int> primes;
    for (int p = 2; p <= upperbound; p++) {
        if (prime_bools[p] == true) {
            primes.push_back(p);
        }
    }
    return primes;
}

int main()
{
    cout << sieve_of_eratosthenes(110000)[10000];
    return 0;
}
