/*
Description:

AP

In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.

For instance, the sequence 5, 7, 9, 11, 13, 15 … is an arithmetic progression with common difference of 2.

GP

In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.

For example, the sequence 2, 6, 18, 54, … is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, … is a geometric sequence with common ratio 1/2.

HP

In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an arithmetic progression.

 

Prerequisites:

    Loops
    Arithmetic operators
    Data Types

Objective:

    To understand the concept of
    if-else construct
    Continuous looping
    Type Casting

Inputs:

Positive integers say ‘A’, ‘R’ and ‘N’
where:

    A = First number
    R = Common difference(AP & HP), Common ratio(GP)
    N = number of terms
    A, R and N should be < 210
*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <float.h>

int main(int argc, char **argv) {

    if(argc != 4) {
        printf("Error, integer arguments not provided.\n");
        return 1;
    }

    char *endptr;
    errno = 0; 


    double a = strtod(argv[1], &endptr);

    if (errno != 0 || *endptr != '\0' || a <= 0.0 || a > DBL_MAX) {
        printf("Error, argument 'r'  must be a real > 0.\n");
        return 1;
    }

    double r = strtod(argv[2], &endptr);


    if (errno != 0 || *endptr != '\0' || r <= 0.0 || r > DBL_MAX) {
        printf("Error, argument 'r'  must be a real > 0.\n");
        return 1;
    }

    long n = strtol(argv[3], &endptr, 10);


    if (errno != 0 || *endptr != '\0' || n <= 0 || n > INT_MAX) {
        printf("Error, argument 'n'  must be an  integer > 0.\n");
        return 1;
    }


    double ap = a;
    double gp = a;
    double hp = 1/a;

    printf("AP\t\t GP \t\t HP\n");
    for(int i = 0; i <= n; i++) {
        printf("%f\t\t %f\t\t %f\n", ap, gp, hp);

        ap += r;
        gp *= r;
        hp = 1/ap;
    }


}