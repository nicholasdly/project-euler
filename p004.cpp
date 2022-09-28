
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/**
 * Returns whether or not a given string is a palindrome.
 * 
 * @param str Input string.
 * @return Boolean representing if string is palindrome.
 */
bool is_palindrome(string str)
{
    for (int i=0; i <= str.size(); i++) {
        if (str[i] != str[str.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

/**
 * Finds the largest palindrome made from the product of two numbers of
 * specified digits.
 * 
 * @param digits The maximum number of digits for the two numbers.
 * @return The largest palindrome made.
 */
int largest_palindrome_product(int digits)
{
    int a = pow(10, digits) - 1;  // Upper-bound
    int b = 1 + a / 10;           // Lower-bound
    
    int lp = 0;  // Largest palindrome product

    for (int i=a; i >= b; i--) {
        for (int j=i; j >= b; j--) {
            int p = i * j;

            if (p < lp) {
                break;
            }
            
            if (is_palindrome(to_string(p))) {
                if (p > lp) {
                    lp = p;
                }
            }
        }
    }
    return lp;
}

int main()
{
    int digits = 3;
    cout << largest_palindrome_product(digits);
    return 0;
}
