/*Q.1 Temperature Converter
Develop a program that converts temperature from degrees Celsius to Fahrenheit using the formula: °F = (9/5 × °C) + 32*/



#include<stdio.h>

    int main() {
        float temp_cel, temp_far;

        printf("Enter Temperature in Degree Celsius :- ");
        scanf("%f", &temp_cel);
        temp_far = (temp_cel*9)/5+32;

        printf("The temperature corresponding to %.2f Celsius is %.2f Fahrenheit", temp_cel, temp_far);
        return 0;

    }
    
    
    
/*Q.2 Gross Salary Calculator
Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to the base salary as chosen by the user.*/



#include<stdio.h>

    int main() {
        
        float basic, gross, hra, da, ta;

        printf("Enter basic salary:- ");
        scanf("%f", &basic);

        hra = (basic/10);
        da = (basic/20);
        ta = (basic/100)*8;
        gross = basic + hra + da + ta;

        printf("Gross salary = %.2f", gross);

    return 0;

    }
    
    
    
/*Q.3 Triangle Angle Finder
Write a program to find the third angle of a right triangle when two other angles are given.*/



#include<stdio.h>

    int main() {
        float ang_1, ang_2, ang_3;
        
        printf("Enter 1st Angle :- ");
        scanf("%f", &ang_1);
        printf("Enter 2nd Angle :- ");
        scanf("%f", &ang_2);
        ang_3 = 180 - ang_1 - ang_2;
        
        printf("Third angle = %.2f degrees", ang_3);

    return 0;

    }