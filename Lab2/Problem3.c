//
//  main.c
//  Problem3
//
//  Created by Shivam Patel on 2/26/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int val1, val2=0, sum=0, temp;//declaring and initializing variables
        
    printf("Enter an integer: ");//asking the user to enter a value
    scanf("%d",&val1);//storiing the value from user
    temp = val1;//storing the value of val1 into another variable
    while (val1 != 0)//if the value of val1 is not equal to 0, the loop goes forward
    {
        val2 = val2 * 10;//setting the value of val 2 into 10
        val2 = val2 + val1 % 10;//adding that to the value of modulus of val1
        val1 = val1/10;//setting val1 as val1 divided by 10
        
    }
    
    printf("Reverse number: %d\n",val2);//here we are printing reverse of the number
    
    sum = temp + val2;//here we add both the numbers, the original and reverse of it
    printf("Sum is: %d\n",sum);//printing the sum of both the numbers
    
    
    
    
    
    return 0;
}
