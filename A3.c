/*Description:

When the program is run, the provided string should be printed on the terminal in X formation.


Prerequisites:

    Loops
    Arithmetic operators

Objective:

    To understand the concept of
    if-else construct
    Continuos looping

Inputs:

A integer say ‘N’. Where N < 25

 

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int main(int argc, char **argv) {

    if(argc != 2) {
        printf("Error, string argument not provided.\n");
        return 1;
    }
    

    char* str = argv[1];
    int n = strlen(str);



    for(int i = 0; i < n; i++) {
        int s1 = i;
        int s2 = n-i-1;


        if (s1 == s2) {
            
            for(int j = 0; j < s1; j++)
                putchar(' ');
            putchar(str[i]);
            putchar('\n');
        }
        else
        {
            int mn = (s1 < s2)*s1 + (s2 < s1)*s2;
            int mx = (s1 > s2)*s1 + (s2 > s1)*s2;

            s1 = mn;
            s2 = mx - mn - 1;


            for(int j = 0; j < s1; j++)
                putchar(' ');
            putchar(str[i]);

    
            for(int j = 0; j < s2; j++)
                putchar(' ');
            putchar(str[i]);
            putchar('\n');


        }

    }

    return 0;
    

}