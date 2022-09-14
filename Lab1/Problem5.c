//
//  main.c
//  Problem5
//
//  Created by Shivam Patel on 2/9/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num[10];
    int i,j;
    printf("Enter 10 decimal values: ");//asking the user for 10 values
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);//storing the values in an array
        
    }
    for(i =0; i < 10; i++)
    {
        for(j= 0; j < 10; j++)
        {
            if(num[j] > num[i])//checking if number at 1 place is greater than number at second place
            {
                int temp =num[i];//if the condition satisfies we use the bubble sort to sort the numbers in the ascending order
                num[i] = num[j];
                num[j] = temp;
                
            }
        }
    }
    printf("\n");
    printf("The sorted numbers are: ");//printing the numbers in ascending order
    for(i = 0; i < 10; i++)
    {
        printf("\n%d",num[i]);//printing the sorted numbers
    }
    printf("\n");
    
    
    return 0;
}
