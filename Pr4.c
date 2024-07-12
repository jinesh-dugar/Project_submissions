/*Right half triangle pattern using a nested for loop*/



#include <stdio.h>

    int main () {
        
        for (int i = 1; i <= 5; i++) {
            
            for (int l = 1; l <= i; l++) {
                printf("%d ", l + 40);
            }
            
            printf("\n");
        }
        
        return 0;
    }



/*Floyd’s triangle pattern using a nested for loop*/



#include <stdio.h>

    int main () {
        
        int start = 11;
        
        for (int o = 1; o <= 4; o++) {
            
            for (int i = 1; i <= o; i++) {
                printf("%d ", start);
                start++;
            }
            
            printf("\n");
        }
        
        return 0;
    }



/*Left half triangle pattern using a nested for loop*/



#include <stdio.h>

    int main () {
        
        int space = 4, start = 5, run = 0;
        
        for (int ol = 1; ol <= 5; ol++) {
            
            for(int il1 = 1; il1 <= space; il1 ++) {
                printf("  ");
            }
            
            space--;
            
            for (int il2 = 1; il2 <= ol; il2++) {
                printf("%d ", start);
                start++;
            }
            
            run ++;
            
            start = 5 - run;
            
            printf("\n");
            
        }
        
        return 0;
        
    }



/*Inverted Left half triangle pattern using a nested for loop*/



#include <stdio.h>

    int main () {
        
        int space = 0;
        
        for (int ol = 5; ol >= 1; ol--) {
            
            int start = 1;
            
            for (int il1 = 1; il1 <= space; il1++) {
                printf("  ");
            }
            
            for (int il2 = 1; il2 <= ol; il2++) {
                printf("%d ", start);
                
                (start == 1) ? (start = 0) : (start = 1);
            }
            
            space++;
            
            printf("\n");
            
        }
        
        return 0;
        
    }



/*Full Pyramid pattern using a nested for loop*/



#include <stdio.h>

    int main () {
        
        for (int ol = 1; ol <= 5; ol++) { // Interesting to note that even with the outer loop running only 5 times, we are able to print patterns containing upto 9 elements in a row. usually, outer loop is run the number of times with the highest number of elements that any row in the pattern contains
            
            int start = 1;
            
            for (int il1 = 1; il1 <= 5 - ol; il1++) {
                printf("  ");
                start++;
            }
            
            for (int il2 = 1; il2 < (2*ol); il2 ++) {
                
                printf("%d ", start);
                
                if (il2 < ol) {
                    start++;
                }
                
                else {
                    start--;
                }
            }
            
            printf("\n");
            
        }
        
        return 0;
    }



/*Custom numeric pattern using a nested for loop*/



#include <stdio.h>

    int main () {
        
        for (int ol = 1; ol <= 5; ol ++) {
            
            int il1 = 1;
            
            for (il1; il1 <= ol; il1++) {
                printf("%d ", il1);
            }
            
            for (int il2 = 1; il2 <= 10 - (2*ol); il2++) {
                printf("  ");
            }
            
            for (int il3 = 1; il3 <= ol; il3++) {
                il1--; //Doubt : Why am I supposed to put il1-- before printf, it should be after according to logic
                printf("%d ", il1);
            }
            
            printf("\n");
        }
        
        return 0;
        
    }



/*Custom alphabetic pattern using a nested for loop*/



#include <stdio.h>

    int main () {
        
        int space, stars;
        
        for (int ol = 1; ol <= 5; ol++) {
            
            if (ol == 1 || ol == 3) {
                stars = 5;
            }
            else {
                stars = 1;
            }
            
            for (int il1 = 1; il1 <= stars; il1++) {
                printf("* ");
            }
            
            if (ol == 2) {
                printf("      *");
            }
            
            printf("\n");
        }
    }