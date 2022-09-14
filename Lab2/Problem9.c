//
//  main.c
//  Problem9
//
//  Created by Shivam Patel on 2/28/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str1[50];//declaring a string
    int i,j;
    printf("Enter a string: ");//asking userto enter a string
    gets(str1);//storing the string using gets
    
    for(i = 0; str1[i] != '\0'; ++i)//starting the for loop until it is not equal to '\0'
    {
        while(!((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z') || str1[i] == '\0' || str1[i] == ' '))
            //here we check the conditions, we only look for alphabetes and remove all other characters present in the string
        {
            for(j = i; str1[j] != '\0'; ++j)//starting the loop until the value is ot equal to '\0'
            {
                str1[j] = str1[j+1];//here we store the 2nd character of string as first character
            }
            str1[j]='\0';//when the loop ends we set the string as eaual to '\n'
            
        }
        
        
    }
    
    printf("String: ");
    puts(str1);//printing the value of string after removing special characters using puts
    
    return 0;
}

