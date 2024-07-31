/* Develop a program that finds the length of a string using a pointer */



#include <stdio.h>

int main() {
    
    char str[1000];
    char *ptr = str;
    int length = 0;

    printf("Enter a string : ");
    scanf("%s", str);

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("\nLength of the string is: %d", length);

    return 0;
    
}



/* Develop a Program to find cubes of all elements from a given 2D array using Pointer with UDF */



#include <stdio.h>

void Cube(int *arr, int r, int c) {
    
    int size = r * c;

    for (int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    
    int r, c;
    
    printf("Enter number of rows you want in your 2d Array : ");
    scanf("%d", &r);
    
    printf("Enter number of columns you want in your 2d Array : ");
    scanf("%d", &c);
    
    int array[r][c];
    
    printf("\nEnter elements of the 2D array (%d x %d) :\n\n", r, c);
    
    for (int i = 0; i < r; i++) {
        
        for (int j = 0; j < c; j++) {
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
        
    }

    Cube ( &array[0][0], r, c );

    printf("\nCubes of all elements in the 2D array:\n");
    
    for (int i = 0; i < r; i++) {
        
        for (int j = 0; j < c; j++) {
            printf("%d\t", *(array[0] + i * c + j));
        }
        
        printf("\n");
    }

    return 0;

}