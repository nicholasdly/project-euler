
#include <iostream>
#include <cmath>

using namespace std;

/**
 * Finds the difference between the sum of the squares of the first natural
 * numbers up to an upperbound, and the square of the sum.
 * 
 * @param upperbound A specified upperbound.
 */
int sum_square_difference(int upperbound)
{
    int sum = 0;
    int square = 0;

    // Calculate the sum of squares
    for (int i=1; i <= upperbound; i++) {
        sum += pow(i, 2);
    }

    // Calculate the square of the sum
    for (int i=1; i <= upperbound; i++) {
        square += i;
    }
    square = pow(square, 2);

    return square - sum;
}

int main()
{
    cout << sum_square_difference(100);
    return 0;
}
