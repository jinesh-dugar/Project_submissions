// #include<stdio.h>

//     int main(){

//         float f = -5.2f;
//         printf("%.3f", f);

// }



// #include<stdio.h>

//     int main() {

//         int a, b;
//         a = 5;
//         b = a++ + ++a * a++;
//         printf("%d", b);
        
//     }



// #include<stdio.h>

//     int main() {

//         int a, b;
//         a = 5;
//         b = a++ + a++ * ++a;
//         printf("%d", b);
        
//     }



// #include<stdio.h>

//     int main() {

//         int a, b;
//         a = 5;
//         b = ++a * a++ + a++;
//         printf("%d", b);
        
//     }



/*Program for entry into a park*/



// #include<stdio.h>

//     int main() {

//         int age, x;
//         float height;
//         printf("Is some adult over the age of 18 accompanying you? Type 1 if yes or 0 if no ");
//         scanf("%d", &x);
//         printf("Enter your height in meters:-");
//         scanf("%f", &height);
//         printf("Enter your age in years:-");
//         scanf("%d", &age);

//         if(x==1 || age>5 || height>1) {
//             printf("You are eligible for entry into the park");
//         }
//         else {
//             printf("You are not eligible for entry into the park");
//         }

//         return 0;
//     }   /* How to get the code to get all inputs before showing the decision ?*/
        /*Error was coming as I was entering a float value inside Integers place*/



/*Math pre-processor directory functions*/   /*28th June, 2024*/



// #include<stdio.h>
// #include<math.h>

//     int main () {

//         int x1 = ceil(3.6);
//         int x2 = floor(3.6);
//         int x3 = pow(2.00, 4.00);
//         int x4 = abs(-19);
//         float x5 = sqrt(25.986);

//         printf("%d\n", x1);
//         printf("%d\n", x2);
//         printf("%d\n", x3);
//         printf("%d\n", x4);
//         printf("%f", x5);

//         return 0;

//     }



/* Program for Leap Year */



// #include<stdio.h>
    
//     int main () {

//         int year;
//             printf("Enter a year to check whether it was/is/will be a leap year or not. Enter the year:- ");
//             scanf("%d", &year);

//     if( year%400==0 || (year%4==0 && year%100!=0)) {
//         printf("Entered Year was/is/will be a leap year");
//     }

//     else{
//         printf("Entered Year was/is/will not be a leap year");
//     }

//     return 0;

//     }



/*Program for sum of numbers in a given range (Starting and Ending number included)*/



// #include<stdio.h>
    
//     int main() {
        
//         int a,b,sum;

//         printf("Enter starting number:- ");
//         scanf("%d", &a);
//         printf("Enter ending number:- ");
//         scanf("%d", &b);
//         sum = (b*(b+1))/2 - (a*(a-1))/2;

//         printf("Sum from %d to %d = %d", a,b,sum);

//     return 0;

//     } 



/*Program for finding greatest number among three numbers*/



/*Possible cases :- 1) All three same;     2) Two same, third distinct;        3) All three different*/


// #include<stdio.h>

//     int main() {

//         int a,b,c;

//         printf("Enter 1st number:- ");
//         scanf("%d", &a);
//         printf("Enter 2nd number:- ");
//         scanf("%d", &b);
//         printf("Enter 3rd number:- ");
//         scanf("%d", &c);

//         // Addressing 1st Case
//         if(a==b && b==c) {                                             /*Valueable lesson :- {a==b==c} is not a valid condition to be checked for*/
//             printf("All the entered numbers are equal");
//         }
//         // Addressing 2nd Case
//         else if(a==b) {
//             if (b>c) {
//                 printf("1st and 2nd numbers are same and are greater than the 3rd number");
//             }

//             else {
//                 printf("1st and 2nd numbers are same and are smaller than the 3rd number");
//             }
//         }
//         else if(c==b) {
//             if (a>c) {
//                 printf("2nd and 3rd numbers are same and are smaller than the 1st number");
//             }

//             else {
//                 printf("2nd and 3rd numbers are same and are greater than the 1st number");
//             }
//         }
//          else if(a==c) {
//             if (b>c) {
//                 printf("1st and 3rd numbers are same and are smaller than the 2nd number");
//             }

//             else {
//                 printf("1st and 3rd numbers are same and are greater than the 2nd number");
//             }
//         }
//         else if(a>b && a>c) {
//             printf("1st number is the greatest");
//         }
//         else if(b>a && b>c) {
//             printf("2nd number is the greatest");
//         }
//          else if(c>a && c>b) {
//             printf("3rd number is the greatest");
//         }
//         return 0;
//     }



/*To find whether a given entered number is prime or not*/



// #include<stdio.h>

// int main () {
//     int i, a = 2, x = 0;
//     printf("Enter a number to find whether it is prime or not :- \n");
//     scanf("%d", &i);

//     for(a; a < i; a++) {
//         if (i % a == 0) {
//             x = 1;
//             break;
//         }
//         else {
//             x = 0;
//         }

//     }

//     (x == 0) ? (printf("Prime Number")) : printf("Not a prime Number");

//     return 0;
// }



/*Write a program in C language to print the factorial of a number*/



// #include <stdio.h>

// int main () {
//         int number, fac, l;
//         printf("Enter a positive number to get its factorial :- ");
//         scanf("%d", &number);

//         if(number <= 0) {
//                 if (number == 0) {
//                         printf("Great question, that's a tricky one. You'd expect the answer to be 0, but it's actually one. Yeah, you heard that right. 0! does equal 1\n");
//                 }
//                 else {
//                         printf("Factorial of a negative number is not defined within the domain of mathematics. Please try again with a valid natural number input\n");
//                         main ();
//                 }
//         } 

//         fac = 1;
//         for (l = 1; l <= number; l++) {
//                 fac = fac*l;
//         }
        
//         printf("Factorial of %d = %d", number, fac);
        
//         return 0;
        
// }



/*Printing Fibonacci Series upto nth term with user input of n*/  /*Dated 18th June, 2024*/



// #include <stdio.h>

//     int main () {
//         int last2 = 0, last1 = 1, mlc, current, noft, term_cnf;

//         printf("Enter the number of terms upto which you want Fibonacci series to be printed :- ");
//         scanf("%d", &noft);
        
//         printf("If you want starting 0 and 1 to be included in counting of terms in total number of terms, press 1 or else, press 0 :- ");
//         scanf("%d", &term_cnf);
        
//         (term_cnf == 1) ? (noft = noft-2) : (noft = noft);

//         printf("0 1 ");

//         for (mlc = 1; mlc <= (noft); mlc++) {
//             current = last2 + last1;
//             printf("%d ", current);
//             last2 = last1;
//             last1 = current;
//         }

//         return 0;
//     }



/*Printing nth term of Fibonacci sequence taking n as user input*/  /*Dated 18th June, 2024*/



// #include <stdio.h>

//     int main () {
//         int last2 = 0, last1 = 1, mlc, current, t_no, term_cnf, dup_t_no;

//         printf("Enter the term of Fibbonacci series you want to be printed :- ");
//         scanf("%d", &t_no);
        
//         dup_t_no = t_no;
        
//         printf("If you want me to consider 0 and 1 as the first 2 terms, press 1 or else, to consider 1 and 2 as the first 2 terms press 0 :- ");
//         scanf("%d", &term_cnf);
        
//         (term_cnf == 1) ? (t_no = t_no-2) : (t_no = t_no);

//         for (mlc = 1; mlc <= t_no; mlc++) {
//             current = last2 + last1;
//             last2 = last1;
//             last1 = current;
//         }
        
//         printf("%dth term of Fibbonacci sequence = %d", dup_t_no, current);

//         return 0;
//     }



/*Printing table of n*/



// #include<stdio.h>

//     int main () {

//         int n;

//         printf("\nEnter any number to get its table printed : ");
//         scanf("%d", &n);

//         printf("\n");

//         for(int i = 1; i <= 10; i++) {
            
//             printf("%d x %d = %d\n", n, i, i*n);

//         }

//     return 0;

// }



/*Sum of first n natural numbers*/



// #include<stdio.h>

// int main () {
    
//     int result = 0, i = 1, n;

//     printf("Enter a number : ");
//     scanf("%d", &n);

//     while(i <= n) {
//         result += i;
//         i++;
//     }

//     printf("Sum of natural numbers upto %d = %d", n, result);
// }



/*: In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90%
of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's
salary is input through the keyboard write a program to find his gross salary.*/



// #include<stdio.h>

//     int main() {
//         float salary, hra, da, gross_salary;
//         printf("Enter your salary:- ");
//         scanf("%f", &salary);
//         (salary<1500 && salary > 0) ? (hra=salary/10, da=(salary/100)*90) : (hra=500, da=(salary/100*98));
//         printf("Gross salary = Basic salary + Dearness allowance + House rent allowance = %.2f + %.2f + %.2f = %.2f", salary, da, hra, (salary+da+hra));
//         return 0;
//     }



/*A company insures its drivers in the following cases: 1) If the driver is married. 2) If the driver is unmarried, male & above 30 years of age.
3) If the driver is unmarried, female & above 25 years of age.*/



// #include<stdio.h>

//     int main () {
//         int m = 5, a = 5;
//         char g;
//         printf("Enter your marital status (1 for married and 0 for unmarried) :- ");
//         scanf("%d", &m);
//         printf("Enter your age:- ");
//         scanf("%d", &a);
//         printf("Enter your gender (F for female and M for male) :- ");
//         scanf(" %c", &g);

//         (m == 1 || (m == 0 && g == 'M' || g == 'm' && a>30) || (m == 0 && g == 'F' || g == 'f' && a>25)) ? (printf("You are eligible to be insured. Apply today!!")) : (printf("You are not eligible to be insured"));

//         return 0;

//     }



/*If cost price and selling price of an item are input through the keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he made or loss he incurred.*/



// #include<stdio.h>

//     int main() {

//         float cost_price, selling_price, rate, x;

//         printf("Enter cost price:- \nEnter selling price:- ");
//         scanf("%f %f", &cost_price, &selling_price);

//         rate=selling_price - cost_price;
//         x=0;

//         (rate>0)?(x=1, printf("Profit is incurred\n")):(x=0, printf("Loss is incurred\n"));
//         (x==1)?(printf("Profit = %.2f", rate)):(printf("Loss = %.2f", -rate));

//     return 0;

//     }

    /*Learnings:-   1) Keep in mind the datatypes and their coressponding format specifiers to avoid running into error
                    2) x=1 is assigning 1 value to x whereas; x==1 is checking whether the value of x is 1 or not
                    3) While printing when you put the reference after the comma in correspondence with the format specifier, 
                       arithmetic operation can be used including but not limited to simply reversing the sign of the value
                    4) When you print higher decimal point value into lesser decimal point value, it gets rounded-off */



/*According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.*/



// #include<stdio.h>
// #include<stdlib.h>

//     int main() {

//         int year, diff_year, diff_days, no_leap, day;
//         printf("Enter a year in YYYY format to find out the day on its first date:- ");
//         scanf("%d", &year);


//         diff_year = year-2001;
//         (diff_year >= 0) ? ((diff_year = year-2001), (no_leap = diff_year/4)) : ((diff_year = 2000-year), (no_leap = (1 + (diff_year/4)))); 
        // printf("%d", diff_year);
        // (diff_year >= 0) ? (no_leap = diff_year/4) : (no_leap = 1 + (diff_year/4));
//         diff_days = (diff_year*365) + no_leap;
//         day = diff_days % 7;
        
//         if(diff_year >= 0) {
            
//             switch (day) {

//             case 0:
//                 printf("Monday");
//             break;

//             case 1:
//                 printf("Tuesday");
//             break;

//             case 2:
//                 printf("Wednesday");
//             break;

//             case 3:
//                 printf("Thursday");
//             break;

//             case 4:
//                 printf("Friday");
//             break;

//             case 5:
//                 printf("Saturday");
//             break;

//             case 6:
//                 printf("Sunday");
//             break;
//         }
//         }

//         else {
//              switch (day) {

//             case 0:
//                 printf("Monday");
//             break;

//             case 1:
//                 printf("Sunday");
//             break;

//             case 2:
//                 printf("Saturday");
//             break;

//             case 3:
//                 printf("Friday");
//             break;

//             case 4:
//                 printf("Thursday");
//             break;

//             case 5:
//                 printf("Wednesday");
//             break;

//             case 6:
//                 printf("Tuesday");
//             break;
//         }
//         }

//     return 0;

// } 



/*Celsius to Fahrenheit*/



// #include<stdio.h>

//     int main() {
//         float temp_cel, temp_far;

//         printf("Enter Temperature in Degree Celsius :- ");
//         scanf("%f", &temp_cel);
//         temp_far = (temp_cel*9)/5+32;

//         printf("The corresponding Temperature for %.2f Celsius will be %.2f Fahrenheit", temp_cel, temp_far);
//         return 0;

//     }

/*Note :- We can't put %.xf in scanf's reference, where x = any number*/



/*Gross salary calculator*/



// #include<stdio.h>

//     int main() {
        
//         float basic, gross, hra, da, ta;

//         printf("Enter basic salary:- ");
//         scanf("%f", &basic);

//         hra = (basic/10);
//         da = (basic/20);
//         ta = (basic/100)*8;
//         gross = basic + hra + da + ta;

//         printf("Gross salary = %.2f", gross);

//     return 0;

//     }



/*Third angle of a triangle finder*/



// #include<stdio.h>

//     int main() {
//         float ang_1, ang_2, ang_3;
        
//         printf("Enter 1st Angle :- ");
//         scanf("%f", &ang_1);
//         printf("Enter 2nd Angle :- ");
//         scanf("%f", &ang_2);
//         ang_3 = 180 - ang_1 - ang_2;
        
//         printf("Third angle = %.2f degrees", ang_3);

//     return 0;

//     }



/*To find if three given sides can constitute a triangle*/



// #include<stdio.h>

//     int main () {

//         float side_1, side_2, side_3;

//         printf("Enter length of 1st side :- ");
//         scanf("%f", &side_1);
//         printf("Enter length of 2nd side :- ");
//         scanf("%f", &side_2);
//         printf("Enter length of 3rd side :- ");
//         scanf("%f", &side_3);

//         (((side_1 + side_2) > side_3)  &&  ((side_3 + side_2) > side_1)  &&  ((side_3 + side_1) > side_2)) ? printf("Valid sides for triangle formation") : printf("Given lengths of 3 lines cannot form a triangle");

//         return 0;
//     }

/*Missed & sign in scanf*/



/*Write a C program that prompts the user to input a series of integers until the user enters 0 using a while loop. 
  Calculate and print the sum of all the positive integers entered*/



// #include<stdio.h>

//     int main () {

//         int i = 5, a = 0;

//         while (i != 0) {
//             printf("Enter a number :-");
//             scanf("%d", &i);

//             if(i > 0) {
//                 a = a + i;
//             }
//         }

//         printf("Sum of +ve numbers entered = %d", a-5);

//         return 0;
//     }



/*Write a C program that calculates the product of numbers from 1 to 5 using a while loop*/



// #include<stdio.h>

//     int main () {

//         int a = 1, i = 1;

//         while(a <= 5) {
//             i = i * a;
//             a++;
//         }

//         printf("%d", i);
//     }



// /*Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.*/



// #include<stdio.h>

//     int main () {
//         int a = 1, i = 1, c, sum = 0, test;
//         printf("Enter upto which number to calculate sum of cubes :- ");
//         scanf("%d", &i);

//         test = (i*(i + 1)*(i)*(i + 1))/4;
        
//         printf("%d\n", test);

//         while (a <= i) {
//             c = a*a*a;
//             sum = sum +c;
//             a++;
//         }

//         printf("Sum of cubes upto %d = %d", i, sum);
//         return 0;
//     } 



/*Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10*/



// #include<stdio.h>

//     int main () {

//         int i, a = 1;

//         printf("Enter a positive number to get its table printed upto x10 :- ");
//         scanf("%d", &i);

//         if(i>=0) {
//             (printf("You've entered a valid number. Here's your output.\n"));
//         }

//         else { 
//             while(i<0) {

//             printf("Invalid input, please enter a positive number.\n");
//             scanf("%d", &i);

//             }
//             printf("%d is a valid input. Here's your output.\n", i);
//         }
//         while(a<11) {

//             printf("%d x %d = %d\n", i, a, a*i);
//             a++;
//         }
//     return 0;

// }



/*Write a program in C language for printing all the odd numbers within a given range using the while loop*/



// #include<stdio.h>

//     int main () {
//         int a, b, c;
//         printf("Enter starting number :- ");
//         scanf("%d", &a);
//         printf("Enter ending number :- ");
//         scanf("%d", &b);

//         printf("List of odd numbers between %d and %d : ", a, b);

//         if(a%2 == 0) {
//             c = a + 1;
//             while (c <= b) {
//                 printf("%d\n", c);
//                 c = c + 2;
//             }
//         }

//         else {
//              while (a <= b) {
//                 printf("%d\t", a);
//                 a = a + 2;
//             }
//         }

//         return 0;
//     }

/*Much simpler logic exists, try thinking of that and do it again*/



/*Code to print addition of numbers within a given range*/



// #include<stdio.h>

//     int main () {
//         int st, en, dup_st, dup_en, sum = 0, cnf;
//         printf("Enter starting number :- ");
//         scanf("%d", &st);
//         dup_st = st;
//         printf("Enter ending number :- ");
//         scanf("%d", &en);
//         dup_en = en;

//         if(st == en) {
//             printf("You've entered the same starting and ending number. Thus the sum is the number itself, which is %d", st);
//         }

//         else if (st>en) {
//             printf("The ending number you entered is greater than the starting number.\nI am assuming you want sum of numbers from %d to %d. Press 1 to confirm or 0 to modify your entry\n", en, st);
//             scanf("%d", &cnf);

//             if (cnf == 1) {
//                 while (en<=st){
//                     sum = sum + en;
//                     en++;
//                 }
//                 printf("Sum of numbers between %d and %d including %d and %d = %d", dup_en, st, dup_en, st, sum);
//             }

//             else {
//                 main();
//             }
//         }

//         else {
//             while(st<=en) {
//             sum = sum + st;
//             st++;
//         }
        
//         printf("Sum of numbers from %d to %d including %d and %d = %d", dup_st, en, dup_st, en, sum);

//         }

//         return 0;
//     }



/*Printing an A.P. given the first term, common difference and number of terms with option to get the sum of all terms printed.*/



// #include<stdio.h>

//     int main () {
//         int noft, count = 0, re, sm_cnf;
//         float ft, cd, sum;

//         printf("Enter the first term:- ");
//         scanf("%f", &ft);
//         printf("Enter the common difference:- ");
//         scanf("%f", &cd);
//         printf("Enter the number of terms:- ");
//         scanf("%d", &noft);

//         sum = 0;

//         if (noft<=0) {
//             printf("Error. Please enter a natural number as valid entry for number of terms. Press modify entry");
//             while (noft <= 0) {
//                 printf("Retry entering a valid input for total number of terms. Number of terms = ");
//                 scanf("%d", &noft);
//             }
//         }

//         while (count <= noft) {
//             printf("%.1f  ", ft);
//             sum = sum + ft;
//             ft = ft + cd;
//             count++;
//         }

//         printf("Great. That's the desired A.P. printed.\nNow press 1 if you'd like to know the sum of all the terms in the A.P.");
//         scanf("%d", &sm_cnf);

//         if(sm_cnf == 1) {

//         printf("Sum of all the terms in the given A.P. = %d", sum);

//         }

//         return 0;
//     }



/*Finding number of digits in a number*/



// #include<stdio.h>

//     int main () {
//         int a, dup_a, count = 0;
//         printf("Enter a number:- " );
//         scanf("%d", &a);

//         dup_a = a;

//         while(a != 0) {
//             a/=10;
//             count++;
//         }

//         printf("Number of digits in numeral part of %d = %d", dup_a, count);

//         return 0;
//     }



/*Do - While loop*/



// #include<stdio.h>

//     int main () {
//         int a;
//         a = 49;
//         do {
//             a = a-2;
//             printf("%d\t", a);
//         }

//         while (a >= 47);

//         return 0;
//     }



/*Day on first date of each year Code*/   /*Backwards year constraint remains*/



// #include<stdio.h>

//     int main() {

//         int year, diff_year, diff_days, no_leap, day, dup_diff_year, x, y, i, j;
//         printf("Enter a year in YYYY format to find out the day on its first date:- ");
//         scanf("%d", &year);

//         diff_year = year-2001;
//         x = diff_year/100;
//         y = x/4;
//         dup_diff_year = diff_year;
//         (diff_year >= 0) ? ((diff_year = year-2001), (no_leap =  + diff_year/4)) : ((diff_year = 2001-year), (no_leap = (1 + ((diff_year-1)/4)))); 
//         no_leap = no_leap - x + y;
//         diff_days = (diff_year*365) + no_leap;
//         day = diff_days % 7;
        
//         if(dup_diff_year >= 0) {
            
//             switch (day) {

//             case 0:
//                 printf("Monday");
//             break;

//             case 1:
//                 printf("Tuesday");
//             break;

//             case 2:
//                 printf("Wednesday");
//             break;

//             case 3:
//                 printf("Thursday");
//             break;

//             case 4:
//                 printf("Friday");
//             break;

//             case 5:
//                 printf("Saturday");
//             break;

//             case 6:
//                 printf("Sunday");
//             break;
//         }
//         }

//         else {
//              switch (day) {

//             case 0:
//                 printf("Monday");
//             break;

//             case 1:
//                 printf("Sunday");
//             break;

//             case 2:
//                 printf("Saturday");
//             break;

//             case 3:
//                 printf("Friday");
//             break;

//             case 4:
//                 printf("Thursday");
//             break;

//             case 5:
//                 printf("Wednesday");
//             break;

//             case 6:
//                 printf("Tuesday");
//             break;
//         }
//         }

//     return 0;           

// }



/*Prime numbers between 2 numbers*/   /*Dated 28th June, 2024*/



// #include<stdio.h>

//     int main () {
//         int n, n1, prime[10000], index = 0, pfactor[10000], index2 = 0, x = 1;

//         start :

//         printf("\nEnter any positive integer as starting point : ");
//         scanf("%d", &n);
//         printf("\nEnter any positive integer as ending point : ");
//         scanf("%d", &n1);

//         while (n < 0 || n1 < 0) {
//             printf("\nInvalid entry. Retry entering 2 positive integers as starting and ending points : \n");
//             scanf("%d %d", &n, &n1);
//         }

//         if (n == n1) {
//                 printf("\nStarting and Ending points are same. \nRetry entering starting and ending points with positive and unequal numbers.\n");
//                 goto start;
//         }

//         if (n > n1) {
//             int cnf;
//             printf("\nStarting point is greater than the ending point.\nDo you want me to replace the starting and ending points or you want to re-enter the entries. Press 1 for replacing or 0 for re-entering : ");
//             scanf("%d", &cnf);

//             switchstart:

//             switch (cnf) {
//                 case 1:
//                     n = n + n1;
//                     n1 = n - n1;
//                     n = n - n1;
//                     break;
//                 case 0:
//                     goto start;
//                 default:
//                     printf("\nInvalid input. Do you want me to replace starting points or re-enter the entries. Press 1 for replacing or 0 for re-entering : ");
//                     scanf("%d", &cnf);
//                     goto switchstart;
//             }
//         }

//         for (int i = n; i <= n1; i++) {
//             int primechk = 1;
//             for (int l = 2; l < i/2; l++) {
//                     if (i % l == 0) {
//                         primechk = 0;
//                         break;
//                     }
//             }
//             if (primechk == 1) {
//                     prime[index] = i;
//                     index++;
//             }
//         }

//         printf("\nPrime numbers from %d to %d are : ",n , n1);

//         for(int l = 0; l < index; l++) {
//                 printf("%d ", prime[l]);
//         }

//         printf("\n\nTotal number of prime numbers from %d to %d are %d", n, n1, index);

//     return 0;

// }



/*A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.*/   /*Dated 27th June, 2024*/



// #include<stdio.h>

//     int main () {
//         int n, prime[10000], index = 0, pfactor[10000], index2 = 0, x = 1;

//         printf("Enter any positive integer : ");
//         scanf("%d", &n);

//         while (n < 0) {
//             printf("\nInvalid entry. Retry entering a positive integer : ");
//             scanf("%d", &n);
//         }

//         for(int a = 2; a <= n/2; a++) {
                
//                 if (n % a == 0) {
//                    x = 1;
//                    break;
//                 }

//                 else {
//                    x = 0;
//                 }

//         }

//         if (x == 0) {
//                 printf("\n%d itself is a prime number.\nThus, it has only one prime factor, which is %d itself", n, n);
//         }

//         else {
//                 int dup_n = n;

//                 for (int i = 2; i <= n; i++) {
//                 int primechk = 1;
//                 for (int l = 2; l < i/2; l++) {
//                         if (i % l == 0) {
//                         primechk = 0;
//                         break;
//                         }
//                 }
//                 if (primechk == 1) {
//                         prime[index] = i;
//                         index++;
//                 }
//                 }

//                 // for(int l = 0; l < index; l++) {
//                 //     printf("%d ", prime[l]);
//                 // }

//                 for (int l = 0; l < index; l++) {
//                 pri :
//                 if (n % prime[l] == 0) {
//                         n = n/prime[l];
//                         pfactor[index2] = prime[l];
//                         index2++;
//                         goto pri;
//                 }
//                 }

//                 printf("\nPrime factors of %d are : ", dup_n);

//                 for (int o = 0; o < index2; o++) {
//                 printf("%d ", pfactor[o]);
//                 }
//         }

//         return 0;
//     }



/*Can a number be expressed as a sum of two prime numbers*/   /*Dated 28th June, 2024*/



// #include<stdio.h>

//      int main () {

//         int n, ans = 0, no_ways = 0;

//         printf("\nEnter any natural number to know whether it can be expressed as a sum of two prime numbers or not : ");
//         scanf("%d", &n);

//         int prime[n], index = 0;

//         while(n <= 0) {
//                 printf("\nThe entered number is not a valid natural number. Please retry entering a natural number : ");
//                 scanf("%d", &n);
//         }

//         for (int l = 2; l < n; l++) {
                
//                 int primechk = 1;

//                 for (int i = 2; i <= l/2; i++) {
//                         if (l % i == 0) {
//                                 primechk = 0;
//                                 break;
//                         }
//                 }

//                 if (primechk == 1) {
//                         prime[index] = l;
//                         index++;
//                 }
//         }

//         int ansindex = 0, ansno = 0;

//         for(int l = 0; l < index; l++) {

//                 int primechk2 = 1;

//                 int new_n = n - prime[l];
                
//                 if(new_n == 1) {
//                         primechk2 = 0;
//                         continue;
//                 }
                
//                 for (int i = 2; i <= new_n/2; i++) {
                        
//                         if(new_n % i == 0) {
//                                 primechk2 = 0;
//                                 break;
//                         }

//                 }

//                 if (primechk2 == 1) {
//                                 ans = 1;
//                                 ansindex = l;
//                                 ansno = new_n;
//                                 no_ways++;
//                 }
//         }

//         if (ans == 0) {
//                 printf("\n%d cannot be expressed as a sum of 2 prime numbers.", n);
//         }
//         else if (ans == 1) {
//                 printf("\n%d can be expressed as a sum of 2 prime numbers.\n\nOne of the possible ways is %d + %d = %d", n, prime[ansindex], ansno, n);
//         }
//         else {
//                 printf("\nWe've ran into an unexpected error. Please re-start the program. Thank you for understanding.");
//         }
        
//         printf("\n%d", no_ways);

//         return 0;
        
//      }



/*Armstrong number checking*/   /*Dated 1st July, 2024*/



// #include <stdio.h>
// #include <math.h>

//     int main () {
//         int n, no_digits = 0;

//         printf("Enter any natural number to know whether it is an armstrong number or not : ");
//         scanf("%d", &n);

//         while (n <= 0) {
//             printf("Not a valid entry!\nPlease retry entering a natural number : ");
//             scanf("%d", &n);
//         }

//         int dup_n = n;
//         int dup2_n = n;

//         int x;

//         while (n >= 1) {
//             n = n/10;
//             x = n;
//             no_digits++;            
//         }

//         // printf("%d", no_digits);

//         int sum = 0;

//         for(int l = 1; l <= no_digits; l++) {

//             int dup_n = dup2_n;

//             for (int l1 = 1; l1 < l; l1++) {
//                 dup_n = dup_n/10;
//             }

//             dup_n = dup_n % 10;

//             // double no = dup_n;

//             // double digit = no_digits;

//             double curr_n = pow(dup_n, no_digits);

//             // printf("%.0lf\n", curr_n);

//             sum = sum + curr_n;
//         }

//         // printf("%d", sum);

//         if(sum == dup2_n) {
//             printf("\nEntered number is an armstrong number.");
//         }
//         else {
//             printf("\nEntered number is not an armstrong number.");
//         }

//         return 0;
//     }