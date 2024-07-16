/*Negative Elements in 1D Array*/



// #include <stdio.h>
    
    // int main () {
        
    //     int n, no_neg = 0;
        
    //     printf("Enter the size you want for your array : ");
    //     scanf("%d", &n);
        
    //     while (n < 0) {
    //         printf("Invalid input received for size of array! Please retry entering a natural number as a valid entry for size of your array : ");
    //         scanf("%d", &n);
    //     }
        
    //     int arr[n], neg[n], neg_in[n];
        
    //     for (int lc1 = 0; lc1 < n; lc1++) {
    //         printf("\nPlease enter array element %d : ", lc1);
    //         scanf("%d", &arr[lc1]);
    //     }
        
    //     for (int lc2 = 0; lc2 < n; lc2++) {
    //         if (arr[lc2] < 0) {
    //             neg[no_neg] = arr[lc2];
    //             neg_in[no_neg] = lc2;
    //             no_neg++;
    //         }
    //     }
        
    //     printf("\n%d negative element(s) found in array given by you\n", no_neg);
        
    //     if (no_neg > 0) {
            
    //         printf("\n\nThe negative elements along with their indexes are stated below :\n");
        
    //         for (int lc3 = 0; lc3 < no_neg; lc3++) {
    //             printf("\n%d found at %d index", neg[lc3], neg_in[lc3]);
    //         }
        
    //     }
        
    //     return 0;
    // }
    
    
    
    /*Largest Element in 2D Array*/   /*Can't handle multiple largest entries*/
    
    
    
    // #include <stdio.h>
    
    //     int main () {
    //         int r, c;
            
    //         printf("Enter the number of rows you want in your 2d array : ");
    //         scanf(" %d", &r);
            
    //         while (r < 0) {
    //             printf("Invalid input received! Please retry entering a natural number as a valid entry for number of rows of 2d array : ");
    //             scanf(" %d", &r);
    //         }
            
    //         printf("Enter the number of columns you want in your 2d array : ");
    //         scanf(" %d", &c);
            
    //         while (c < 0) {
    //             printf("Invalid input received! Please retry entering a natural number as a valid entry for number of columns of 2d array : ");
    //             scanf(" %d", &c);
    //         }
            
    //         int arr[r][c];
            
    //         for (int ol = 0; ol < r; ol++) {
                
    //             for (int il = 0; il < c; il++) {
                    
    //                 printf("Enter array element arr[%d][%d] : ", ol, il);
    //                 scanf("%d", &arr[ol][il]);
                    
    //             }
    //         }
            
    //         int largest = arr[0][0], ind_r, ind_c;
            
    //         for (int ol = 0; ol < r; ol++) {
                
    //             for (int il = 0; il < c; il++) {
                    
    //                 if(arr[ol][il] > largest) {
    //                     largest = arr[ol][il];
    //                     ind_r = ol;
    //                     ind_c = il;
    //                 }
                    
    //             }
                
    //         }
            
    //         printf("\nLargest element = %d found at arr[%d][%d]", largest, ind_r, ind_c);
            
    //         return 0;
    //     }
    
    
    
    /*Transpose of 2d Array*/
    
    
    
    // #include <stdio.h>
    
    //     int main () {
    //         int rc;
            
    //         printf("Enter the number of rows and columns you want for your array : ");
    //         scanf("%d", &rc);
            
    //         int arr[rc][rc];
            
    //         for (int ol = 0; ol < rc; ol++) {
    //             printf("\n");
    //             for (int il = 0; il < rc; il ++) {
    //                 printf("Enter array element arr[%d][%d] : ", ol, il);
    //                 scanf("%d", &arr[ol][il]);
    //             }
    //         }
            
    //         printf("\nYour entered array : \n\n");
            
    //         for (int ol = 0; ol < rc; ol++) {
                
    //             for (int il = 0; il < rc; il ++) {
    //                 printf("%d ", arr[ol][il]);
    //             }
                
    //             printf("\n");
                
    //         }
            
    //         printf("\nTranspose of entered array : \n\n");
            
    //         for (int ol = 0; ol < rc; ol++) {
                
    //             for (int il = 0; il < rc; il ++) {
    //                 printf("%d ", arr[il][ol]);
    //             }
                
    //             printf("\n");
                
    //         }
            
    //         return 0;
    //     }
    
    
    
    /*Sum of Elements in Row & Column of 2D Array*/
    
    
    
    // #include <stdio.h>
    
    //     int main() {
            
    //         int r,c ;
                                
    //         printf("Enter the number of rows you want for your 2d Array : ");
    //         scanf("%d", &r);
            
    //         while (r <= 0) {
    //             printf("Invalid entry for number of rows.Please retry entering a valid natural number as input for number of rows : ");
    //             scanf("%d", &r);
    //         }
            
    //         printf("Enter the number of columns you want for your 2d Array : ");
    //         scanf("%d", &c);
            
    //         while(c <= 0) {
    //             printf("Invalid entry for number of rows.Please retry entering a valid natural number as input for number of rows : ");
    //             scanf("%d", &c);
    //         }
            
    //         int arr[r][c];
            
    //         for (int ol = 0; ol < r; ol++) {
    //             for (int il = 0; il < c; il++) {
    //                 printf("Enter array element arr[%d][%d] : ", ol, il);
    //                 scanf("%d", &arr[ol][il]);
    //             }
    //         }
            
    //         printf("\nEntered array : \n");
            
    //         printf("    ");
            
    //         for(int l = 0; l < c; l++) {
    //             printf("C%d ", l);
    //         }
            
    //         int ol, il;
            
    //         for (ol = 0; ol < r; ol++) {
                
    //             printf("\nR%d\t", ol);
                
    //             for (il = 0; il < c; il++) {
    //                 printf("%d ", arr[ol][il]);
    //             }
                
    //         }
            
    //         int rs, cs, sumr = 0, sumc = 0;
            
    //         printf("\n");
            
    //         printf("\nEnter a row number to find it's sum : ");
    //         scanf("%d", &rs);
            
    //         printf("\nElements of row %d : ", rs);
            
    //         for (int l1 = 0; l1 < c; l1++) {
    //             printf("%d ", arr[rs][l1]);
    //             sumr = sumr + arr[rs][l1];
    //         }
            
    //         printf("\nSum of row %d = %d\n", rs, sumr);
            
    //         printf("\nEnter a column number to find it's sum : ");
    //         scanf("%d", &cs);
            
    //         printf("\nElements of column %d : ", cs);
            
    //         for (int l2 = 0; l2 < r; l2++) {
    //             printf("%d ", arr[l2][cs]);
    //             sumc = sumc + arr[l2][cs];
    //         }
            
    //         printf("\nSum of column %d = %d\n", cs, sumc);
            
    //         return 0;
            
    //     }