/*Write a C program to store numbers in an array called numArr. The series of numbers should be
entered through keyboard and assume that the user enters only 6 numbers. Go through the array
and find the store the odd and even numbers in two different arrays called oddNum and evenNum
respectively*/

#include <stdio.h>

int main(void)
{
   int numArr[100], i; 
   int num=6;
   
   
   printf("Enter series of Numbers : \n");
   
   for(i = 0; i < num; i++)
   {
       scanf("%d", &numArr[i]);
   }
   
    printf("Even Numbers : \n");
   
   for(i = 0; i < num; i++)
   {
       if(numArr[i] % 2 == 0)
       {
           printf("%d ", numArr[i]);
       }
   }
   
   printf("Odd Numbers : \n");
   
   for(i = 0; i < num; i++)
   {
       if(numArr[i] % 2 != 0)
       {
           printf("%d ", numArr[i]);
       }
   }
   
getchar();

    return 0;
}









/*Write a C program to store numbers in an array called numArr. The series of numbers should be
entered through keyboard and assume that the user enters only 6 numbers. Go through the array
and find the store the odd and even numbers in two different arrays called oddNum and evenNum
respectively*/

#include <stdio.h>

// main function begins program execution
int main(void)
{
   int numArr[100], i; // declare variables
   int num=6;
   
   
   printf("Enter series of Numbers : \n"); // get numbers by user
   
   for(i = 0; i < num; i++) // check the count and increment of counting
   {
       scanf("%d", &numArr[i]); // read the entered numbers
   }
   
    printf("Even Numbers : \n"); // begins to print even number of the number series
    
   for(i = 0; i < num; i++) // check the count and increment of counting
   {
       if(numArr[i] % 2 == 0) // check whether the number is even or not
       {
           printf("%d ", numArr[i]); // print even number of the number series
       }
   }
   
   printf("\nOdd Numbers : \n"); // begins to print odd number of the number series
    
   for(i = 0; i < num; i++) // check the count and increment of counting
   {
       if(numArr[i] % 2 != 0) // check whether the number is even or not
       {
           printf("%d ", numArr[i]); // print even number of the number series
       }
   }
   
getchar(); // get the character values

    return 0; // end of the execution
}
