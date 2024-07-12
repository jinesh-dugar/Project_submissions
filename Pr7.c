/*Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. 
Make sure that the program is endless until a certain letter is pressed.*/



#include<stdio.h>

    int main () {
        int op;

        printf("\nWelcome to calculator for doing simple aritmetic calculations upon/with/of two numbers (no1 {operator chosen by you} no2)\n");

        do {

            printf("\nPress 1 for doing Addition Operation of 2 numbers\nPress 2 for doing Subtraction Operation upon 2 numbers\nPress 3 for doing Division Operation upon 2 numbers\nPress 4 for doing Multiplication Operation of two numbers\nPress 5 for doing modulo operation upon 2 numbers\nOr press 0 for exiting calculator\n");
            scanf("%d", &op);

            while (op < 0 || op > 5) {
                printf("\n\"Invalid input received. Please try again entering a integer from 0 to 5 as a valid input.\"\n\nPress 1 for doing Addition Operation of 2 numbers\nPress 2 for doing Subtraction Operation upon 2 numbers\nPress 3 for doing Division Operation upon 2 numbers\nPress 4 for doing Multiplication Operation of 2 numbers\nPress 5 for doing modulo operation upon 2 numbers\nOr press 0 for exiting the calculator\n");
                scanf("%d", &op);
            }

            if(op != 0) {
                
                int no1, no2, result;

                if(op == 2 || op == 3 || op == 5) {
                    printf("\nPlease keep in mind that operation will be carried out in the following manner : [no1 operator no2]\n");
                }
                    
                printf("\nPlease enter number 1 : ");
                scanf("%d", &no1);
                printf("\nPlease enter number 2 : ");
                scanf("%d", &no2);

                switch (op) {
                    case 1:
                    result = no1 + no2;
                    printf("\nResult when %d and %d are added = %d\n", no1, no2, result);                
                    break;
                    case 2:
                    result = no1 - no2;
                    printf("\nResult when %d is subtracted from %d = %d\n", no2, no1, result);
                    break;
                    case 3:
                    result = no1 / no2;
                    printf("\nResult when %d is divided by %d = %d\n", no1, no2, result);
                    break;
                    case 4:
                    result = no1*no2;
                    printf("\nResult when %d and %d are multiplied = %d\n", no1, no2, result);
                    break;
                    case 5:
                    result = no1 % no2;
                    printf("\nRemainder when %d is divided by %d = %d\n", no1, no2, result);
                    break;
                }
        
            }

        }
        while(op != 0);

        printf("\n\"Thank you for using our calculator! It was a pleasure to assist you in your mathematical queries\"");

        return 0;
    }