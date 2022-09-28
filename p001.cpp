
#include <iostream>

using namespace std;

/**
 * Returns the sum of all multiples of three or five up to a threshold.
 * 
 * @param threshold The range (exclusive) of allowed numbers to be summed.
 * @return Sum of all multiples of three or five.
 */
int multiples_of_three_or_five(int threshold)
{
    int sum = 0;
    for (int i=1; i < threshold; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int threshold = 1000;
    int sum = multiples_of_three_or_five(threshold);
    cout << sum;
    return 0;
}
