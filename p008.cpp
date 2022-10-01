
#include <iostream>
#include <string>

using namespace std;

/**
 * Given a string representation of a number, return the largest product of
 * length-number of adjacent digits.
 * 
 * @param input The string representation of a number.
 * @param length The number of adjacent digits.
 * @return The largest product of adjacent digits.
 */
long long int largest_product_in_a_series(string input, int length)
{
    long long int product = 0;
    for (int i=0; i <= (int)(input.size() - length); i++) {
        long long int num = 1;
        for (int j=0; j < length; j++) {
            num *= input[i+j] - '0';
        }
        if (num > product) {
            product = num;
        }
    }
    return product;
}

int main()
{
    string input = 
        "7316717653133062491922511967442657474235534919493496983520312774506326"
        "23957831801698480186947885184385861560789112949495459501737958331952853"
        "20880551112540698747158523863050715693290963295227443043557668966489504"
        "45244523161731856403098711121722383113622298934233803081353362766142828"
        "06444486645238749303589072962904915604407723907138105158593079608667017"
        "24271218839987979087922749219016997208880937766572733300105336788122023"
        "54218097512545405947522435258490771167055601360483958644670632441572215"
        "53975369781797784617406495514929086256932197846862248283972241375657056"
        "05749026140797296865241453510047482166370484403199890008895243450658541"
        "22758866688116427171479924442928230863465674813919123162824586178664583"
        "59124566529476545682848912883142607690042242190226710556263211111093705"
        "44217506941658960408071984038509624554443629812309878799272442849091888"
        "45801561660979191338754992005240636899125607176060588611646710940507754"
        "10022569831552000559357297257163626956188267042825248360082325753042075"
        "2963450";

    cout << largest_product_in_a_series(input, 13);
    return 0;
}