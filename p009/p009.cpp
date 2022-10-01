
#include <iostream>
#include <cmath>

using namespace std;

/**
 * Calculates the product of the Pythagorean triple that sums to a specified
 * value using Euclid's formula, which is a formula used to generate Pythagorean
 * triples given arbitrary integers m and n where m > n > 0.
 * 
 * @param sum The sum of the Pythagorean triple.
 * @return The product of the Pythagorean triple.
 */
int special_pythagorean_triplet(int sum)
{
    int m_lower = sqrt(sum) / 2 + 0.5;
    int m_upper = sqrt(sum / 2);

    for (int m = m_lower; m < m_upper; m++) {
        if (sum % (2 * m) == 0) {
            // There exists an integer m that computes a Pythagorean triple.
            int n = (sum / (2 * m)) - m;
            int a = (m*m) - (n*n);
            int b = 2 * m * n;
            int c = (m*m) + (n*n);
            return a * b * c;
        }
    }
    // There does not exist an integral Pythagorean triple.
    return -1;
}

int main() {
    cout << special_pythagorean_triplet(1000) << "\n";
    return 0;
}
