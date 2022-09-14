//
//  main.c
//  Problem4
//
//  Created by Shivam Patel on 2/1/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int MAXROW = 10;
    int MAXCOL = 10;
    int A[MAXROW][MAXCOL], B[MAXROW][MAXCOL], C[MAXROW][MAXCOL];
    int r,c,i,j;
    printf("Enter number of rows: ");//asking user for number of rows
    scanf("%d", &r);
    printf("Enter number of columns: ");//asking user for number of columns
    scanf("%d", &c);
    
    printf("Enter numbers for first matrix: ");//asking the user for the values for matrix 1
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d",&A[i][j]);//storing the values from user in the matrix 1
    
    printf("Enter numbers for second matrix: ");//asking the user for the values for matrix 2
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d",&B[i][j]);//storing the values from user in the matrix 2
    
    printf("Sum of two matrix are: \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];//here we are adding both the matrix
            printf("%d ",C[i][j]);// printing the sum of both the matrix
        }
    printf("\n");
    }
    return 0;
}
