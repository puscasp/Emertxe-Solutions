/*Description:

In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum). Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).


Example:

The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6. Equivalently, the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6. The next perfect number is 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128


Prerequisites:

    Loops
    Arithmetic operators

Objective:

    To understand the concept of If-else constructs
    if-else construct

Inputs:

A positive integer say ‘N’. Where N < 220
 

Sample Execution / Output:

Test Case 1: Positive Numbers
 

Test Case 2: Positive Numbers
 

Test Case 3: Negative Number
 

Test Case 4: N > 220

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main(int argc, char **argv) {

    if(argc != 2) {
        printf("Error, integer argument not provided.\n");
        return 1;
    }

    char *endptr;
    errno = 0; 
    long val = strtol(argv[1], &endptr, 10);

    if (errno != 0 || *endptr != '\0' || val <= 0 || val > INT_MAX) {
        printf("Error, argument provided must be an integer > 0.\n");
        return 1;
    }

    int n = (int) val;


    int sum = 0;
    for(int i = 1; i < n; i++) {

            if (n % i == 0) {
                sum += i;
            }

    }


    if (sum == n) {
        printf("%d is a perfect number.\n", sum);
        return 0;
    } else {
        printf("%d is not a perfect number.\n", n);
        return 0;
    }

}