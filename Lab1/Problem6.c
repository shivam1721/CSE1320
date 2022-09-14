//
//  main.c
//  Problem6
//
//  Created by Shivam Patel on 2/5/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int r, c;//initializing the variables
    printf("Enter number of rows: ");//asking user to enter number of rows
    scanf("%d",&r);
    
    printf("Enter number of columns: ");//asking user to enter number of columns
    scanf("%d",&c);
    
    int a[r][c], b[r][c], e[r][r];//initializing matrix
    int i,j;
    int count =0;
    
    printf("Enter elements for matrix A: ");//asking user to enter values for matrix A
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);//the values are stored in array a in each iteration
            
        }
            
    }
    
    printf("Enter elements for matrix B: ");//asking user to enter values for matrix B
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);//the values are stored in array b in each iteration
            
        }
            
    }
    
    int m=0,w=0;
    for(i = 0; i < r; i++)//going through loop and storing each value in another array e
    {
        w=0;
        for(j = c-1; j >= 0; j--)
        {
            e[m][w] = a[i][j];
            w++;//post increment w
        }
        m++;//post increment m
    }
    
    
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(e[i][j] == b[i][j])//here if the values in matrix b equals matrix e, counter increments
            {
                count++;
            }
        }
    }
    
    
    printf("\n");
    for(i = 0; i < r; i++)//this loop is used for printing the values of matrix A
    {
        printf("\n");
        for(j = 0; j < c; j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
    }
    
    printf("\n");//this loop is used for printing the values of matrix B
    for(i = 0; i < r; i++)
    {
        printf("\n");
        for(j = 0; j < c; j++)
        {
            
            printf("%d",b[i][j]);
            printf("\t");
        }
    }
    
    printf("\n");
    int k = r * c;
    if(count == k)//checking if both the matrix are mirror of each other
    {
        printf("Both the matrix are mirror of each other \n");//if yes, it prints they are mirror
        
    }
    else
    {
        printf("Both are not mirror of each other \n");//else it prints they are not mirror of each other
    }
    
    
    
    
    
    
    
    return 0;
}
