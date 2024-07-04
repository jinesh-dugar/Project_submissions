/*A 5-digit positive integer is entered through the keyboard, write a recursive and a non-recursive function to calculate sum of digits of
the 5-digit number.*/



#include<stdio.h>

    int sum(int n, int y) {
        
        int dup_n = n;

        int run = y;

        int sum1;

        if (run == 6) {
            return 0;
        }

        for (int l = 1; l < run; l++) {
            n = n/10;
        }
        n = n % 10;

        run++;

        sum1 = n;

        return sum1 + sum(dup_n, run);
    }

    int main () {
        int n, x = 1;

        printf("Please enter a 5-digit natural number : ");
        scanf("%d", &n);

        printf("Sum of digits of %d (the five digit word entered) = %d", n, sum(n, x));

        return 0;
    }