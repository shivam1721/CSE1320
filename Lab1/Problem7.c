//
//  main.c
//  Problem7
//
//  Created by Shivam Patel on 2/5/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[30], b = 5, num, i, j;
    
    printf("Enter 5 elements for the array: ");//asking the user for the numberd
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);//storing the numbers in the array
    }
    
    printf("\nEnter element to be inserted: ");//asking the user for the number to be added to the array
    scanf("%d", &num);//storing thr values in thr array
    
    i = b - 1;//here we are adding th number that user entered into the initial array
    while (num < a[i] && i >= 0) {
      a[i+1] = a[i];
        i--;
    }
    a[i+1] = num;
    b++;
    
    
    for (i = 0; i < b; ++i)
    {
        for (j = i+1; j < b; ++j)
        {
            if(a[i] > a[i+1])//checking if the number at position 1 is greater then number at position 2
            {
                num = a[i];//bubble sorting the numbers one by one
                a[i] = a[i+1];
                a[i+1] = num;
            }
        }
    }
    
    
    printf("\nThe array in ascending order is ");
    for (i = 0; i < b; i++)
    {
        printf("\n%d", a[i]);//printing the sorted numbers including the number user wanted to insert in the array
    }
    printf("\n");
    return 0;
}
