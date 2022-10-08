
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

/**
 * Computes the triangle number of a specified term.
 * 
 * @param term Specified term
 * @return The triangle number
*/
int get_triangle_number(int term)
{
    return (term * term + term) / 2;  // Equation for triangle number
}

/**
 * Computes all factors of a specified number.
 * 
 * @param num Specified number
 * @return A vector of factors
*/
vector<int> get_factors(int num)
{
    vector<int> factors;

    // Square roots are used as the upperbound, because the factors of 'num'
    // that are greater than the square root can be found by actually dividing
    // 'num' by the factors less than the square root. 
    for (int i=1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            if (num / i == i) {
                factors.push_back(i);
            } else {
                factors.push_back(i);
                factors.push_back(num / i);
            }
        }
    }
    factors.push_back(num);
    return factors;
}

/**
 * 
*/
int highly_divisible_triangular_number(int divisors)
{
    int term = divisors;
    int num = get_triangle_number(term);
    vector<int> factors = get_factors(num);

    while (factors.size() <= divisors) {
        term += 1;
        num = get_triangle_number(term);
        factors = get_factors(num);
    }
    return num;
}

int main()
{
    cout << highly_divisible_triangular_number(500);
    return 0;
}
