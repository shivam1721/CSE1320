//
//  main.c
//  Problem1
//
//  Created by Shivam Patel on 2/28/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int A[18], B[5];//declarring two arrays
    int i,j, newsize=0, temp=0;
    printf("Enter 13 values for array A in ascending order: \n");//asking the user to enter values for array A
    for(i = 0; i < 13; i++)
    {
        scanf("%d",&A[i]);//storing the values of array A
    }
    
    printf("Enter 5 values for array b in ascending order: \n");//asking user to enter balues for array B
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&B[i]);//storing the balue of array B
    }
    
    newsize = 18;
    
    
    for(i = 13, j = 0; j < 5 && i < 18; i++, j++)//starting the loop for array A from i = 13 as we already have 13 values stored in the array A. we will store the value of array B from i = 13.
    {
        A[i] = B[j];
    }
    
    for(i = 0; i < 18; i++)
    {
        A[i];
    }
    
    
    
    printf("Array elemets are: \n");
    for(i = 0; i < 17; i++)//we are bubble sorting the array A as now we have all the values stored in it
    {
        for(j = 0; j <= 18-i-1; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
            }
            
        }
    }
    
    for(i = 0; i < 18; i++)//with the help of this loop we are printing the final values of array A which are in sorted order.
    {
        printf(" %d ",A[i]);
    }
    
    printf("\n");
    
    
    
    
    

    
    return 0;
}
