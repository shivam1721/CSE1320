//
//  main.c
//  Problem2
//
//  Created by Shivam Patel on 2/1/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    int x;
    printf("Enter any positive integer: "); //asking user to enter the number
    scanf("%d", &a); // taking the value from user
    
    printf("The prime factors of %d are: ",a); // printing the factors
    
    
    for(x = 2; a > 1; x++)//starting a for loop with x=2 as 1 is factor of all the numbers
    
    {
        while(a % x == 0)//for getting the factors, if the remainder is 0, the number is factor
        {
            printf("%d ",x);//printing the factors
            a = a/x;//saving the value of a after it is divided
            
        }
    }
    
    printf("\n");
    
    return 0;
}
