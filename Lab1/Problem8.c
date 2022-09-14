//
//  main.c
//  Problem8
//
//  Created by Shivam Patel on 2/9/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,i,r,new,factorial,permutation;
    
    printf("Enter the number to get the factorial: ");//asking the user for the number
    scanf("%d",&n);
    int j = 1;
    
    for(i = 1;i <= n; i++)
    {
        j = j * i;//finding the factorial of a number till it reaches the number n
    }
    printf("Factoial of %d = %d\n",n, j);//printing the factorial
    
    printf("Enter the value for r : ");//asking the user for thr value of r
    scanf("%d",&r);
    
    new = n - r;//setting the value as n-r
    factorial = new;
    
    for(i = new - 1; i >= 1; i--)
    {
        factorial = factorial + i;//finding thr factorial of second number r
    }
    
    permutation = j/factorial;//finding the permutation with thr help of factorial from 1 and factorial from 2
    printf("Permutation nPr = %d\n",permutation);//printing the permutation
    
    
    
        
    
        
    return 0;
}
