//
//  main.c
//  Problem2
//
//  Created by Shivam Patel on 2/26/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,i,j;
    int counter = 0;
    int found=0;
       
       
    int array[20];//declaring an array
       
    for(i= 0; i < 20; i++)//with the help of this for loop we take 20 values from user and store it in an array
    {
        printf("Enter value %d in ascending order: ",i+1);
        scanf("%d",&array[i]);
    }
       
    printf("\nEnter the value of x: ");
    scanf("%d",&x);//here we are storing the value of x from user
       
       
    printf("\n");
    printf("The array is: \n");
    for(i = 0; i < 20; i++)//with the help of this for loop we are printing the values that user entered
    {
        printf("%d ",array[i]);
    }
    printf("\n");
       
    for(i = 0; i < 20; i++)//we use this for loop to check whether x sqaure is equal to the sum of any two numbers in our array
    {
        for(j = i+1; j < 20; j++)
        {
            if((array[i])+(array[j])==(x))//if the condition satisfies and they are equal, it would print the pair of integers that equals the target value
            {
                found=1;
                printf("(%d,%d)\n",array[i],array[j]);
                counter++;
            }
               
        }
           
    }
    if(!found)//if there are no pairs found, it would print the following message
        printf("There are no such pairs that sum up to target value \n");
       
    return 0;
}
