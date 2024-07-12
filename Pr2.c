/*Simple Grade Calculator*/



#include<stdio.h>

    int main () {
        int score;
        char grade;
        
        printf("Please enter your score out of 100 : ");
        scanf("%d", &score);
        
        if (score < 0 || score > 100) {
            printf("Invalid input received. Please enter a number from 0 to 100 as a valid input for your score : ");
            scanf("%d", &score);
        }
        
        grade = (score >= 85) ? 'A' : (score >= 70) ? 'B' : (score >= 55) ? 'C' : (score >= 40) ? 'D' : 'F';
        
        switch (grade) {
            case 'A':
                printf("\nYour grade is A. Excellent work!\n");
                break;
            case 'B':
                printf("\nYour grade is B. Well Done!\n");
                break;
            case 'C':
                printf("\nYour grade is C. Good Job!\n");
                break;
            case 'D':
                printf("\nYour grade is D. You have passed, but could have done better!\n");
                break;
            case 'F':
                printf("\nSorry, you have failed!\n");
                break;
        }
        
        if (grade == 'F') {
            printf("\nPlease try again next time");
        }
        else {
            printf("\n\'Congratulations! You are eligible for the next level\'");
        }
        
        return 0;
    }