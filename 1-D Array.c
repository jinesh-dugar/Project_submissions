/*Biggest and second biggest in array entered by user w/o Duplicate entry handling*/  /*Dated 20th June, 2024*/



// #include<stdio.h>

//     int main () {
//         int no, l, l1, l2, index = 0, index2 = 0, cnf;

//         printf("Enter number of elements you want to enter :- ");
//         scanf("%d", &no);

//         int arr[no];

//         for (l = 1; l <= no; l++) {
//             printf("Enter %d element :- ", l);
//             scanf("%d", &arr[l-1]);
//         }

//         int biggest = arr[0], biggest2 = arr[0];

//         for (l1 = 1; l1 < no; l1++) {
//             if (arr[l1] > biggest) {
//                 biggest = arr[l1];
//                 index = l1;
//             }
//         }
        
//         printf("Greatest number is %d found at %d index\n", biggest, index);

//         printf("Would you also like to know the second biggest number? Press 1 to know and 0 otherwise :- ");
//         scanf("%d", &cnf);

//         if (cnf == 1) {
//             for (l2 = 1; l2 < no; l2++) {
//                 if ((arr[l2] < biggest) && (arr[l2] > biggest2)) {
//                     biggest2 = arr[l2];
//                     index2 = l2;
//                 }
//             }

//             printf("Second greatest number is %d found at %d index", biggest2, index2);
//         }

//         return 0;

//     }



/*Smallest and second smallest in array entered by user w/o Duplicate entry handling*/  /*Dated 20th June, 2024*/



// #include<stdio.h>

//     int main () {
//         int no, l, l1, l2, index = 0, index2 = 0, cnf;

//         printf("Enter number of elements you want to enter :- ");
//         scanf("%d", &no);

//         int arr[no];

//         for (l = 1; l <= no; l++) {
//             printf("Enter %d element :- ", l);
//             scanf("%d", &arr[l-1]);
//         }

//         int smallest = arr[0], smallest2 = arr[0];

//         for (l1 = 1; l1 < no; l1++) {
//             if (arr[l1] < smallest) {
//                 smallest = arr[l1];
//                 index = l1;
//             }
//         }
        
//         printf("Smallest number is %d found at %d index\n", smallest, index);

//         printf("Would you also like to know the second smallest number? Press 1 to know and 0 otherwise :- ");
//         scanf("%d", &cnf);

//         if (cnf == 1) {
//             for (l2 = 1; l2 < no; l2++) {
//                 if ((arr[l2] > smallest) && (arr[l2] < smallest2)) {
//                     smallest2 = arr[l2];
//                     index2 = l2;
//                 }
//             }

//             printf("Second smallest number is %d found at %d index", smallest2, index2);
//         }

//         return 0;

//     }



/*Deletion of an element*/  /*Dated 20th June, 2024*/



/*Constraint :- Adjacent entries of same number are not getting deleted.*/

// #include<stdio.h>

//     int main () {

//         int no, cnf, cnf2, dupp_no;

//         printf("Enter number of elements you want to enter in the array :- ");
//         scanf("%d", &no);
        
//         while(no <= 0) {
//                 printf("Invalid input received.\nPlease enter a natural number as a valid input for number of elements in the array :- ");
//                 scanf("%d", &no);
//             }

//         dupp_no = no;

//         int arr[no];

//         for (int l = 0; l < no; l++) {
//             printf("Enter %d element :- ", l);
//             scanf("%d", &arr[l]);
//         }

//         printf("\nDo you want to delete any entry of the array? Press 1 for yes and 0 for no :- ");
//         scanf("%d", &cnf);
        
//         while(cnf != 1 && cnf != 0) {
//                 printf("\nInvalid input received.\nDo you want to delete any entry of the array? Press 1 for yes and 0 for no :- ");
//                 scanf("%d", &cnf);
//             }

//         if (cnf == 1) {
//             int x;

//             printf("\nEnter 1 if you want to delete your entry by index number or 0 if you want to delete a specific element entered by you :- ");
//             scanf("%d", &cnf2);
            
//             while(cnf2 != 1 && cnf2 != 0) {
//                 printf("\nInvalid input received.\nEnter 1 if you want to delete your entry by index number or 0 if you want to delete a specific element entered by you :- ");
//                 scanf("%d", &cnf2);
//             }
            

//             if (cnf2 == 1) {
//                 int index, l;

//                 printf("\nEnter the index number whose entry you want to delete :- ");
//                 scanf("%d", &index);
                
//                 printf("\nIndex entry number %d deleted\n", index);

//                 for (l = index; l < no; l++) {
//                     arr[l] = arr[l + 1];
//                 }

//                 arr[no] = arr[(no - 1)]; 
//             }

//             else if (cnf2 == 0) {
//                 int entry, l, index, en_nf, noen = 0; 

//                 printf("\nPlease enter the entry which you want to delete from the array. I'll find the entry/entries for you and delete it/them :- ");
//                 scanf("%d", &entry);
                
//                 en_nf = 1;

//                 for (l = 0; l < no; l++) {
                    
//                     if (arr[l] == entry) {
                        
//                         en_nf = 0;
//                         dupp_no--;

//                         index = l;
//                         printf("\nEntry found ! %d found at index %d\nDeleting the entry now !", entry, (index + noen));
//                         printf("\n");

//                         for (int l1 = index; l1 < no; l1++) {
//                             arr[l1] = arr[l1 + 1];
//                         }

//                         arr[no] = arr[(no - 1)];
//                         noen++;
//                     }
//                 }
//                 (en_nf == 1) ? (printf("No entry of %d found!", entry)) : printf("\n%d entry/entries of %d found and deleted\n", noen, entry);
//                     printf("\n");
//             }

//             printf("\nYour new array is ready! Have a look :- \n");
//             printf("\n");

//             for (int l1 = 0; l1 < (x = (cnf2 == 1) ? (no - 1) : (dupp_no)); l1++) {
//                 printf("%d element of new array = %d\n", l1, arr[l1]);
//             }
//         }

//         return 0;
//     }



/*Array Element deletion*/   /* 1 constraint remains - Deletion of adjacent same Entries is not working properly */   /* 1 possible solution is changing the logic of the program */



// #include<stdio.h>

//     int main () {

//         int no, cnf, cnf2, dupp_no, indexdelcnt = 0, delcor1, delcor2, noen = 0;

//         printf("Enter number of elements you want to enter in the array :- ");
//         scanf("%d", &no);
        
//         printf("\n");
        
//         while(no <= 0) {
//             printf("Invalid input received.\nPlease enter a natural number as a valid input for number of elements in the array :- ");
//             scanf("%d", &no);
//         }

//         dupp_no = no;

//         int arr[no];

//         for (int l = 0; l < no; l++) {
//             printf("Enter element %d :- ", l);
//             scanf("%d", &arr[l]);
//         }

//         printf("\nDo you want to delete any entry of the array? Press 1 for yes and 0 for no :- ");
//         scanf("%d", &cnf);
        
//         while(cnf != 1 && cnf != 0) {
//             printf("\nInvalid input received.\nDo you want to delete any entry of the array? Press 1 for yes and 0 for no :- ");
//             scanf("%d", &cnf);
//         }

//         int delete () {
            
//             if (cnf == 1) {
                
//             int x, moredelcnf;

//             printf("\nEnter 1 if you want to delete your entry by index number or 0 if you want to delete a specific element entered by you :- ");
//             scanf("%d", &cnf2);
            
//             while(cnf2 != 1 && cnf2 != 0) {
//                 printf("\nInvalid input received.\nEnter 1 if you want to delete your entry by index number or 0 if you want to delete a specific element entered by you :- ");
//                 scanf("%d", &cnf2);
//             }
            

//             int delindex () {
                
//                 if (cnf2 == 1) {
//                 int index, l;

//                 printf("\nEnter the index number whose entry you want to delete :- ");
//                 scanf("%d", &index);
                 
//                 while ((index + 1) > (no - indexdelcnt - noen)) {
//                     printf("\nInvalid Index entry! Please retry entering a valid index number to delete :- ");
//                     scanf("%d", &index);
//                 }
                
//                 printf("\nIndex entry number %d deleted\n", index);
//                 printf("\n");

//                 for (l = index; l < no; l++) {
//                     arr[l] = arr[l + 1];
//                 }

//                 arr[no] = arr[(no - 1)];
//                 indexdelcnt++;
//                 }   
                
//                 return 0;
                
//             }
            
//             if (cnf2 == 1) {
//                 delindex ();
//             }

//             int delent () {
                
//                 if (cnf2 == 0) {
//                 int entry, l, index, en_nf, nocn = 0; 

//                 printf("\nPlease enter the entry which you want to delete from the array. I'll find and delete it/them for you:- ");
//                 scanf("%d", &entry);
                
//                 en_nf = 1;

//                 for (l = 0; l < no; l++) {
                    
//                     // if (nocn > 0) {
//                     //     l = l - nocn;
//                     // }
                    
//                     if (arr[l] == entry) {
                        
//                         en_nf = 0;
//                         dupp_no--;

//                         index = l;
//                         printf("\nEntry found ! %d found at index %d\nDeleting the entry now !", entry, (index + nocn));
//                         printf("\n");

//                         for (int l1 = index; l1 < no; l1++) {
//                             arr[l1] = arr[l1 + 1];
//                         }

//                         arr[no] = arr[(no - 1)];
//                         nocn++;
//                         noen++;
//                     }
//                 }
//                 (en_nf == 1) ? (printf("\nNo entry of %d found!", entry)) : printf("\n%d entry/entries of %d found and deleted\n", nocn, entry);
//                 printf("\n");
                
//                 // if (en_nf == 1) {
//                 //     printf("\n");
//                 //     printf("\nPress 2 if you want to rectify your entry for deletion from the array or 0 if you no longer wish to delete any entry or press 1 if you want to remove entry by index instead :- ");
//                 //     scanf("%d", &delcor2);
                    
//                 //     if (delcor2 == 0) {
                        
//                 //     }
                    
//                 //     else if (delcor2 == 1) {
//                 //         delindex();
//                 //     }
                    
//                 //     else if (delcor2 == 2) {
//                 //         delent();
//                 //     }
//                 // }
//                 }
                
//                 return 0;
                
//             }
            
//             if (cnf2 == 0) {
//                 delent ();
//             }
            
//             printf("Your new array is ready! Have a look :- \n");
//             printf("\n");

//             for (int l1 = 0; l1 < (x = (cnf2 == 1) ? (no - indexdelcnt - noen) : (dupp_no - indexdelcnt)); l1++) {
//                 printf("%d element of new array = %d\n", l1, arr[l1]);
//             }
            
//             printf("\nPress 1 if you want to delete more entry/entries or 0 to exit :- ");
//             scanf("%d", &moredelcnf);
            
//             while(moredelcnf != 1 && moredelcnf!= 0) {
//                 printf("\nInvalid input received.\nPress 1 if you want to delete more entry/entries or 0 to exit :- ");
//                 scanf("%d", &moredelcnf);
//             }
            
//                 if (moredelcnf == 1) {
//                     delete ();
//                 }
            
//             }
            
//             return 0;
        
//         }
        
//         if (cnf == 1) {
//             delete ();
//         }

//         return 0;
//     }