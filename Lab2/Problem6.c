#include <stdio.h>

int fibo(int n);

int main(void)
{
    int input, i;
    printf("Please input a positive integer value: ");
    scanf("%d" ,&input);//storing the value of n from the user
    for(i = 1; i <= input; i++)//this loop prints the series till the value inputed
        printf("%d ", fibo(i));//printing the series
    printf("\n");
}

int fibo(int n)//this function calculates the fibonacci series
{
    if(n < 2)
        return n;//if the value of n is less than 2 we return n
    else
        return (fibo(n-1)*fibo(n-1))+1;//calculating the main formula of the series
}
