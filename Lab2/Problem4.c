//
//  main.c
//  Problem4
//
//  Created by Shivam Patel on 2/26/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[50];//declaring string
    int i, j, k=1, length, counter = 0;
    printf("Enter a phrase: \n");//asking user to enter the phrase
    fgets(str,50,stdin);//storing the value from user in string
    
    length = strlen(str);//calculating the length of string using strlen function
    
    printf("Character repeated: ");
    
    for(i = 0; i < length; i++)//in this loop we go through each character and check wheter they are equal to the same character in the string
    {
        for(j=i+1; j < length; j++)
        {
            if(str[i]==str[j])
            {
                if(k==1 && str[j] != '\0')
                {
                    counter++;
                    printf("%c ",str[i]);//here we print the characters that are repeated in the string
                }
                str[j] = '\0';
                k++;
            }
        }
        k=1;
    }
    
    printf("\nNumber of characters repeated: %d\n",counter);//here we print how many characters were repeated in the string
    
    
    return 0;
    
}
