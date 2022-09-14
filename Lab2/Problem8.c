#include <stdio.h>

int CheckPrime(int n);

int main()//this is the main function where we will print the stuff
{
    int n, i = 0, found = 1;
    
    printf("Enter a positive number: \n");//askiing the user to enter the positive integer
    scanf("%d",&n);//storing the value from user
    
    for(i = 2; i <= n/2; i++)//this loop goes through and checks if there are any two numbers whose sum equals the number user entered
    {
        if(CheckPrime(i)==1)//if the number is prime tit goes forward
        {
            if(CheckPrime(n-i) == 1)//if the n-1 value is prime the loop goes forward
            {
                printf("%d = %d + %d\n",n,i,n-i);//here we print the value that user entered and the sum of values which equals originl value
                found = 1;//we set found = 1 when we find the value
            }
            
        }
        
    }
    return 0;
}
        


int CheckPrime(int n)//with the help of this function we wil check if the number is prime or not
{
    int i, prime = 1;
    for(i = 2; i <= n/2; i++)//this loop with check if the number is prime or not
    {
        if(n % i == 0)
        {
            prime = 0;//here if the number is divisible by 2 and gives 0 whci means the number is not prime so we set it as equal to 0 and stop the loop
            break;
        }
    }
    return prime;//returning the value of prime
}

        
        
    
    

