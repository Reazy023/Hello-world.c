//C program (Hello world)
/*
Name; Sanchez Ochieng
Reg no;CT101/G/26450/25
Date;02 October 2025
Description; Eligibility for final exams
*/


// main function
#include <stdio.h>

int main() {
   float attendance, avgmarks;
   //input attendance 
   printf("Enter attendance percentage :");
   scanf("%f", & attendance);
   
   //input average marks
   printf("Enter average marks");
   scanf("%f" ,&avgmarks);
   //check eligibility 
   if(attendance>=75 && avgmarks>=40)
   {printf("Eligible for exams \n");
   }else {printf("not eligible \n");
   }
   
    

    return 0;
    
}
    