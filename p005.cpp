
#include <iostream>

using namespace std;

/**
 * Calculates the smallest multiple of all numbers between one and a specified
 * upperbound.
 * 
 * @param upperbound A specified upperbound.
 */
int smallest_multiple(int upperbound)
{
    int multiple = upperbound;
    bool ismultiple = false;

    while (!ismultiple) {
        ismultiple = true;  // Assume the number is the smallest multiple
        multiple += upperbound;
        for (int i=1; i <= upperbound; i++) {
            if (multiple % i != 0) {
                // If it is not the smallest multiple, increment and restart
                ismultiple = false;
                break;
            }
        }
    }

    return multiple;
}

int main()
{
    cout << smallest_multiple(20);
    return 0;
}