//
//  main.c
//  Problem5
//
//  Created by Shivam Patel on 2/28/20.
//  Copyright © 2020 Shivam Patel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[100], r[100];//declaring two strings on for original and for one reversing it
    int forward, rev, count = 0;
    
    printf("Input a string \n");//asking user to input string
    
    
    gets(s);//getting string from user using gets
    
    
    while (s[count] > 0)//if the word count is greater then 0, the while loop will be exicuted
    {
        count++;
    }
    rev = count - 1;
    
    for(forward = 0; forward < count; forward++)
    {
        r[forward] = s[rev];//storing the string in reverse order from last to first
        rev--;
    }
    
    r[forward] = 0;
    
    printf("Reverse string is: \"%s\"\n", r);//printing the string in reverse way
    return 0;
}
