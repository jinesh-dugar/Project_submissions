/*Star pattern printing - 1 (Rectangle) with user input*/ 



// #include<stdio.h>

//     int main () {
//         int i, j, r, c;

//         printf("Enter number of rows:- ");
//         scanf("%d", &r);

//         printf("Enter number of columns:- ");
//         scanf("%d", &c);
        
//         i = 1; j = 1;
//         for (i; i<=r; i++) {
            
//             for (j; j<=c; j++) {
//             printf("*");
//             }

//             printf("\n");
//             j = 1;
//         }
        
//         return 0;
//     }



/*Star pattern printing - 1 (Triangle) with user input*/



// #include<stdio.h>

//     int main () {
        
//         int r, c;
//         for (r = 1; r<=5; r++) {
//             for (c = 1; c<=r; c++) {
//                 printf("* ");
//             }
//             printf("\n");
//         }

//         return 0;
//     }



/*Number Triangle like 1; 1, 2 with user input*/



// #include<stdio.h>

//     int main () {
//         int r, c, x;

//         printf("Enter number of rows :- ");
//         scanf("%d", &x);

//         printf("\n");

//         for (r = 1; r<=x; r++) {
//             for (c = 1; c<=r; c++) {
//                 printf("%d ", c);
//             }
//             printf("\n");
//         }

//         return 0;
//     }



/*Rhombus printing with user input*/



// #include<stdio.h>

//     int main () {
//         int tnr, nr, a, b, ns;
//         printf("Enter number of rows :- ");
//         scanf("%d", &tnr);
//         printf("Enter number of stars to be printed in each row :- ");
//         scanf("%d", &ns);

//         for (nr = 1; nr <=tnr; nr++) {
//             for (a = 0; a < nr; a++) {
//                 printf(" ");
//             }
//             for (b = 0; b < ns; b++) {
//                 printf("*");
//             }

//             printf("\n");
//         }

//         return 0;
//     }



/*Inverted triangle printing with number of rows as user input*/



// #include<stdio.h>

//     int main () {
//         int tnr, nr, l2, l3, x;

//         printf("Enter number of rows :- ");
//         scanf("%d", &tnr);

//         for (nr = 1; nr <= tnr; nr++) {
//             x  =  ((2*tnr) - 1) - (2*(nr-1));
//             for (l2 = 1; l2 <= (nr-1); l2++) {
//                 printf(" ");
//             }
//             for (l3 = 1; l3 <= x; l3++) {
//                 printf("*");
//             }

//             printf("\n");
//         }
//         return 0;
//     }



/*Random pattern practice question codes using loops*/



// #include<stdio.h>

//     int main () {
//         int i, l, l1;

//         for (l = 1; l<=5; l++) {
//             for (i = 1; i <= l; i++){
//                 printf("%d ", (i + 40));
//             }
//             printf("\n");
//         }

//         return 0;
//     }



// #include<stdio.h>

// int main () {
//     int l, l1;
//     int start = 11;

//     for (l = 1; l <= 4; l++) {
//         for (l1 = 1; l1 <= l; l1++) {
//             printf("%d ", start);
//             start ++;
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include<stdio.h>

//     int main () {
//         int count, l, l1, n;

//         printf("Enter number of rows :- ");
//         scanf("%d", &n);

//         count = 2;

//         for (l = 1; l <= n; l++) {

//             for (l1 = 1; l1 <= 3; l1++) {
//                 if (l1 == 1 || l1 == 3) {
//                     printf("3 ");
//                 }

//                 else {
//                     if (count % 3 == 0) {
//                         printf("3 ");
//                     }

//                     else if (count % 3 == 1) {
//                         printf("1 ");
//                     }

//                     else if (count % 3 == 2) {
//                         printf("2 ");
//                     }
//                 }
//             }
//             printf("\n");
//         }

//         return 0;
//     }



/*Increaing number triangle pattern print E.g. 1;  2, 3;  4, 5, 6 and so on upto user inputed number of rows*/



// #include<stdio.h>

//     int main () {
        
//         int n, l, l1, count;

//         printf("Enter number of rows :- ");
//         scanf("%d", &n);

//         count = 0;

//         for (l = 1; l <= n; l++) {

//             for (l1 = 1; l1 <= l; l1++) {
//                 count ++;
//                 printf("%d ", count);
//             }

//             printf("\n");

//         }

//         return 0;

//     }



/*Incrementing Number Half-Diamond Pattern with Number Initialiser and Number of rows taken as user-input*/



// #include<stdio.h>

//     int main () {
//         int intl, n, lu, ld, lu1, ld1;

//         printf("Enter number initialiser :- ");
//         scanf("%d", &intl);

//         printf("Enter Number of rows :- ");
//         scanf("%d", &n);

//         while ((n % 2 != 1) || (n <= 0)) {
//             printf("Invalid input for number of rows for the given pattern. Please enter a odd natural number to get the required pattern :- ");
//             scanf("%d", &n);
//         }

//         intl = intl - 1;

//         for (lu = 1; lu <= ((n/2) + 1); lu++) {

//             intl ++;

//             for (lu1 = 1; lu1 <= lu; lu1++) {
//                 printf("%d ", intl);
//             }

//             printf("\n");
//         }

//         for (ld = (n/2); ld >= 0; ld--) {

//             intl --;

//             for (ld1 = 1; ld1 <= ld; ld1++) {
//                 printf("%d ", intl);
//             }

//             printf("\n");
//         }

//         return 0;
        
//     }