// /*Reversing String*/



// #include<stdio.h>

//     int main () {

//         char arr[5] = { 'a', 's', 'p', 'o', '\0' };

//         printf("%c", arr[2]);

//         return 0;
//     }



// #include<stdio.h>

//     int main () {

//         int n;

//         printf("Enter a number ending with 6 :- ");
//         scanf("%[^.]", &n);

//         printf("%d", n);

//         return 0;
//     } 



/*Conversion of capital letter to small letter*/   /*Dated 27th June, 2024*/



// #include<stdio.h>

//     int main () {
        
//         int n;

//         printf("Enter number of letters you want to enter in String :- ");
//         scanf("%d", &n);

//         char arr[n];

//         for (int l = 0; l < n; l++) {
//             printf("Enter %d letter :- ", l);
//             scanf(" %c", &arr[l]);
//             arr[l] = arr[l] - 32;
//         }

//         // printf("Enter the string :- ");
//         // gets(arr);

//         printf("\nThe letters have been converted to capital. \n\nHere's the output :- ");

//         for (int l = 0; l < n; l++) {
//             printf("%c ", arr[l]);
//         }

//         return 0;

//      }



/*Finding the length of a string*/   /*Dated 27th June, 2024*/



// #include<stdio.h>
// #include<string.h>

//     int main () {
//         int n;

//         printf("Enter n :- ");
//         scanf("%d", &n);

//         char str[n];

//         printf("Enter string :- ");
//         gets(str);

//         int len = strlen(str);

//         printf("Length of entered string is %d", len);

//         return 0;
//     }



/*Converting string to upper-case with built-in function*/   /*Dated 27th June, 2024*/



// #include<stdio.h>
// #include<string.h>

//     int main () {

//         char str[20];

//         printf("Enter string :- ");
//         scanf("%[^\n]s", str);

//         // str[n] = strlwr(str);

//         printf("%s", strlwr(str));

//         return 0;
//     }



/*String Built-in function codes*/   /*Dated 27th June, 2024*/



// #include<stdio.h>
// #include<string.h>

//     int main () {
//         char n[100], n2[20] = "Jinesh Dugar";

//         strcpy(n2, "Hello");

//         printf("%s", n2);

//         return 0;
//     }



// #include<stdio.h>
// #include<string.h>

//     int main () {
//         char str[100];

//         printf("Enter String : ");
//         scanf("%[^\n]s", str);

//         // str[100] = strrev(str[100]);

//         printf(" %s", strrev(str));

//         return 0;
//     }