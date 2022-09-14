//
//  main.c
//  Problem3
//
//  Created by Shivam Patel on 2/1/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1 = 0;
    int num2 = 1;
    int num3,i;
    int num;
    int sum = 1;
    printf("Enter the number of terms: ");//asking user for the number of terms we want to find
    scanf("%d", &num);//taking thr value from user
    
    printf("The first %d terms of fibonacci numbers are: ",num);
    printf("%d %d",num1,num2);//we are printing the first two values of the series that is 0 and 1 becasue with the help of that we can find other values
    for(i=0; i < num - 2; i++)//starting the loop with i=0 and i<num-2 becasue we have already printed first two values
    {
        num3 = num1  + num2;//printing the third and .. values with the help of first two values
        printf(" %d", num3);
        
        num1 = num2;//assigning the value of num2 as num1 as we now look for the next number
        num2 = num3;//assigning the value of num3 as num2 as we look for the addition of next number
        sum = sum + num3;//finding the sum of fibonacci series
        
    }
    printf("\nThe Sum of above Fibonacci series is: %d",sum);
    
    printf("\n");
    return 0;
}
