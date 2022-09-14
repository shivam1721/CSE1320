//
//  main.c
//  Problem7
//
//  Created by Shivam Patel on 2/28/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str1[10][10], temp[100];//declaring two strings one in which we will store thr original values and one will be used in bubble sorting
    int i, j;
    
    printf("Enter 5 strings on by one: \n");
    for(i = 0; i < 5; i++)
        scanf("%s", str1[i]);//taking the strings from the user and storing them
    
    for(i = 1; i < 5; i++)//running the outer loop that is row loop
    {
        for(j = 1; j < 5; j++)//the inner loop that is columns loop
        {
            if(strcmp(str1[j - 1], str1[j]) > 0)//here we compare two strings if they are greater then 0 or not
            {
                strcpy(temp, str1[j - 1]);
                strcpy(str1[j - 1], str1[j]);
                strcpy(str1[j], temp);
                //here we bubble sorted the strings based on their alphabetic order
            }
        }
    }
    
    printf("\nThe sorted strings are: ");
    for(i = 0; i < 5; i++)
        printf("\n%s", str1[i]);//here we print the sorted strings using the loop
    printf("\n");
    return 0;
}
