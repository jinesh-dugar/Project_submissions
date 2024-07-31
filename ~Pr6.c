/* Develop a program that checks whether a given string is a palindrome or not without using string functions */



#include <stdio.h>

int main() {
    
    char str[100];
    int left, right;
    int length = 0;
    int is_palindrome = 1;

    printf("Enter a string : ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    left = 0;
    right = length - 1;

    while (left < right) {
        
        if (str[left] != str[right]) {
            is_palindrome = 0;
            break;
        }
        
        left++;
        right--;
        
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome\n", str);
    } 
    
    else {
        printf("\"%s\" is not a palindrome\n", str);
    }

    return 0;
}



/* String characters' frequency counter */



#include <stdio.h>

int main() {
    
    char str[100];
    int freq[256] = {0};
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        freq[str[i]]++;
    }
    
    printf("\n");
    
    printf("Character frequencies in %s :\n", str);
    
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d\n", i, freq[i]);
        }
    }

    return 0;
}