
#include <iostream>

using namespace std;

/**
 * Computes iterative sequence starting a specified number.
 * 
 * @param num Starting number
 * @param iterations Current length of sequence/chain
 * @returns The total length of sequence/chain
*/
int chain(long long num, int iterations = 1)
{
    // Stop chain when 'num' is less than or equal to 1
    if (num <= 1) {
        return iterations;
    }

    // Iterative sequence given by problem
    if (num % 2 == 0) {
        return chain(num / 2, iterations + 1);
    }
    return chain(3 * num + 1, iterations + 1);
}

/**
 * Computes every Collatz sequence of every natural number less than a specified
 * threshold.
 * 
 * @param threshold Specified threshold
 * @return The starting value which computes the longest Collatz sequence
*/
int longest_collatz_sequence(int threshold)
{
    int max_start = 0;
    int max_chain = 0;

    for (int i=1; i < threshold; i++) {
        int terms = chain(i);
        if (terms >= max_chain) {
            max_start = i;
            max_chain = terms;
        }
    }

    return max_start;
}

int main()
{
    cout << longest_collatz_sequence(1000000);
    return 0;
}
