#include<stdio.h>

    int main () {
        
        FILE *ptr;

        ptr = fopen("test.txt", "w");

        fputs("This is a test file.\nIt contains multiple lines of text.\n", ptr);

        printf("File created and contents written successfully");

        return 0;

    }