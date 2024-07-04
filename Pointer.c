// #include<stdio.h>

//     int main() {

//         int n = 10, *x = &n;

//         // x = &n;

//         printf("Address of n = %d\n", x);
//         printf("Address of n = %u\n", &n);
//         printf("Value of n = %d\n", *x);
//         printf("Value of n = %d\n", *&n);

//         return 0;
//     }



// #include<stdio.h>

//     int main () {
        
//         int n;

//         printf("Enter a number n : ");
//         scanf("%d", &n);

//         int *x = &n;

//         printf("%d\n", x);
//         printf("%d\n", n);

//         x = 5;

//         // printf("%d\n", x); // address repless with 5

//         printf("Again enter another number : ");
//         scanf("%d", x);   /*Doubt of x and *x*/

//         printf("\nLet's find out whether the value of n has also changed\n");

//         printf("Value of n = %d (Printed through n)\n", n);
//         printf("Value of x = %u (Printed through &n)\n", &n);
//         printf("Value of x = %d (Printed through x)\n", x);
//         printf("Value of n = %d (Printed through *pointer)\n", *x);
//         printf("Value of n = %d (Printed through *&n)\n", *&n);

//         printf("Yups! It changed");

//         return 0;
//     }



// #include<stdio.h>

//     int main () {

//         int *ptr;

//         *ptr = 50;
//         printf("%d\n", *ptr);

//         int a;
//         printf("%d", a);

//         return 0;
//     }



// #include<stdio.h>

//     int main () {
//         int arr[5] = {50, 60, 70, 80, 90};
//         int *p = arr;
//         printf("%d", *p);

//         return 0;
//     }