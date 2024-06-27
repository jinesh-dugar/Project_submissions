/*Write a program in C language to print the sum of the last and the first digit of a number given by the user*/



// #include<stdio.h>
// #include<math.h>

//     int main () {
//         int a, dup_a, fd, ld;
//         float count = 0.00;
//         printf("Enter a number:- " );
//         scanf("%d", &a);

//         dup_a = a;

//         while(a != 0) {
//             a/=10;
//             count++;
//         }

//         // printf("Number of digits in numeral part of %d = %d", dup_a, count);
//         count = count - 1;
//         fd = a/pow(10.00, count);
//         printf("First digit of entered number = %d", fd);      

//         return 0;
//     }



/*Half diamond star pattern*/



// #include<stdio.h>

//     int main () {
//         int tnr, u_tnr, l1, l2, l3, l4, nr, x;
//         printf("Enter total number of rows (Odd Integer) :- ");
//         scanf("%d", &tnr);

//         u_tnr = tnr/2;

//         for (nr = 1; nr <= u_tnr + 1; nr++) {
//             for (l1 = 1; l1 <= nr; l1++) {
//                 printf("*");
//             }
//             printf("\n");
//         }

//         for (l3 = 1; l3 <= u_tnr; l3++) {
//             x = u_tnr - l3 - 1;
//             for (l4 = 1; l4 <= x; l4++) {
//                 printf("*");
//             }
//             printf("\n");
//         }
//         return 0;
//     }



/*Sum of digits of a number*/



// #include<stdio.h>

//     int main () {
//         int a, dup_a, nd = 0, l;
//         printf("Enter a number:- " );
//         scanf("%d", &a);

//         dup_a = a;

//         while(a != 0) {
//             a/=10;
//             nd++;
//         }

//         printf("Number of digits in numeral part of %d = %d", dup_a, nd);

//         for()

//         return 0;
//     }



// #include <stdio.h>

//     int main () {
//         int arr[] = {}, a;

//         for (a = 0; a <= 5; a++) {
//             printf("Enter element %d of array", a + 1);
//             scanf("%d", &arr[a]);
//         }

//         int size = sizeof(arr) / sizeof(arr[0]);

//     return 0;
//     }



/*Write a general-purpose function to convert any given year into its Roman equivalent. Use these Roman equivalents for numbers: 
1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.*/

/*Constraint of 4, 9, 40, 90, 400 and 900 printing remains*/



// #include<stdio.h>

//     int main () {
//         int year;

//         printf("Enter any year : ");
//         scanf("%d", &year);

//         // int m = year / 1000;
//         // int d = (year % 1000) / 500;
//         // int c = (year % 500) / 100;
//         // int l = (year % 100) / 50;
//         // int x = (year % 50) / 10;
//         // int v = (year % 10) / 5;
//         // int i = (year % 5);

//         int A = year / 1000;
//         int B = (year % 1000) / 500;
//         int C = (year % 500) / 100;
//         int D = (year % 100) / 50;
//         int E = (year % 50) / 10;
//         int F = (year % 10) / 5;
//         int G = (year % 5);

//         int x;
//         char pr;

//         for (int ol = 1; ol <= 7; ol++) {
//                 switch (ol) {
//                     case 1:
//                         x = A;
//                         pr = 'M';
//                     break;
//                     case 2:
//                         x = B;
//                         pr = 'D';
//                     break;
//                     case 3:
//                         x = C;
//                         pr = 'C';
//                     break;
//                     case 4:
//                         x = D;
//                         pr = 'L';
//                     break;
//                     case 5:
//                         x = E;
//                         pr = 'X';
//                     break;
//                     case 6:
//                         x = F;
//                         pr = 'V';
//                     break;
//                     case 7:
//                         x = G;
//                         pr = 'I';
//                     break;
//                 } 
            
//             for (int il = 1; il <= x; il ++) {
//                     printf("%c", pr);
//             }

//         }

//         return 0;
//     }