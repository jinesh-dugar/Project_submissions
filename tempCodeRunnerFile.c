
#include<stdio.h>

    int main () {
        int r, c, x;

        printf("Enter number of rows :- ");
        scanf("%d", &x);

        printf("\n");

        for (r = 1; r<=x; r++) {
            for (c = 1; c<=r; c++) {
                printf("%d ", c);
            }
            printf("\n");
        }

        return 0;
    }