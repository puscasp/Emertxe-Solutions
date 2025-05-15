/*Description:

Description:

    In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . . OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
    By definition, the first two numbers in the Fibonacci sequence are either 1 and 1, or 0 and 1, depending on the chosen starting point of the sequence, and each subsequent number is the sum of the previous two

Prerequisites:

    Loops
    Arithmetic operators

Objective:

    To understand the concept of
    if-else construct
    Continuos looping

Inputs:

    A integer say ‘N’

Sample Execution / Output:

Test Case 1: Positive Numbers
 

Test Case 2: Positive Numbers
 

Test Case 3: Negative Number
 

Test Case 4: Negative Number

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


    if (errno != 0 || *endptr != '\0' || val < 0 || val > INT_MAX) {
        printf("Error, argument provided must be an integer >= 0.\n");
        return 1;
    }

    int n = (int) val;


    int sum = 0;
    int minus1 = 1;
    int minus2 = 0;

    if (n == 1) {
        printf("1\n");
        return 0;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    }

    for(int i = 2; i <= n; i++) {

        sum = minus1 + minus2;

        minus2 = minus1;
        minus1 = sum;
        

    }
    printf("%d\n", sum);
    return 0;
    

}