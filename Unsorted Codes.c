// #include <stdio.h>

//     int main () {
//         int arr[] = {52, 48, 79, 26, 14, 10, 20, 30, 59, 78, 26, 23, 24, 78, 28, 26, 79, 95, 96, 98, 97, 32, 67, 76, 05, 45};

//         int size = sizeof(arr) / sizeof(arr[0]);

//         int no, index, x = 1;

//         printf("Enter the 2-digit number you want to find out whether is there in the array or not :- ");
//         scanf("%d", &no);

//         for (int l = 0; l <= size; l++) {
            
//             if (arr[l] == no) {
//                 printf("Voila! Number found\n");
//                 x = 0;
//                 break;
//             }
//             index++;
//         }

//         (x == 0) ? (printf("%d found at %d", no, index)) : (printf("Number not found"));
//     }



// #include<stdio.h>

//     int main () {
//         int l, l1, l2, x;
        
//         for (l = 1; l <= 5; l++) {
//             for (l1 = 1; l1 <= (5-l); l1++) {
//                 printf("  ");
//             }

//             x = 5;

//             for (l2 = 1; l2 <= l; l2++) {
//                 printf("%d ", x);
//                 x--;
//             }

//             printf("\n");
//         }

//         return 0;
//     }



// #include<stdio.h>

//     int main () {
//         int l, l1, l2, x, y = 0;
        
//         for (l = 1; l <= 5; l++) {
            
//             y = 1;
            
//             for (l1 = 1; l1 <= (5-l); l1++) {
//                 printf("  ");
//                 y++;
//             }
            
//             x = y;

//             for (l2 = 1; l2 <= l; l2++) {
//                 printf("%d ", x);
//                 x++;
//             }

//             printf("\n");
//         }

//         return 0;
//     }



// #include<stdio.h>

//     int main () {
//         int no, l, l1, l2, l3, index, index2, arr_co, x = 0;

//         printf("Enter number of elements you want to enter :-");
//         scanf("%d", &no);

//         int arr[no], arr_du[] = {};

//         for  (l = 1; l <= no; l++) {
//             printf("Enter %d element :- ");
//             scanf("%d", &arr[l-1]);
//         }

//         int biggest = arr[0];

//         for (l1 = 1; l1 <= no; l1++) {
//             if (arr[l] > biggest) {
//                 biggest = arr[l];
//                 index = l;
//             }
//         }

//         // arr_co = 0;

//         // for (l3 = 0; l3 < no; l3++) {
//         //     if (l3 != index) {
//         //         if (arr[l3] == biggest) {
//         //             arr_du[arr_co] = (l3);
//         //             arr_co ++;
//         //             x = 1;
//         //         }
//         //     }
//         // }

//         // (x == 1) ? (printf("Biggest number is found at more than one places. Greatest no is %d found at %d indexes", biggest, arr_du[(arr_co - 1)])) : printf("Greatest no is %d found at %d index", biggest, index);

//         int biggest2 = arr[0];

//         for (l2 = 1; l2 <= no; l2++) {
//             if (arr[l2] <= biggest && arr[l2] > biggest2) {
//                 biggest2 = arr[l2];
//                 index2 = l2;
//             }
//         }

//         printf("Second greatest no is %d found at %d index", biggest2, index2);

//         return 0;

//     }



// #include<stdio.h>

//     int main () {
//         int z = 5;
//         printf("%d", sizeof(z));

//         return 0;
//     }



// #include<stdio.h>

//     int main () {
//         int a[] = {11, 22, 33, 44, 55};
//         int sum = 0, *p;

//             for (p = &a[0]; p <= &a[4]; p++) {
//                 sum = sum + *p;
//             }

//         printf("%d", sum);

//         return 0;
//     }