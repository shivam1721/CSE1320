#include <stdio.h>

double mean(double[], int);
double median(double[], int);
double mode(double[], int);
double mean1(double[], int);
double median1(double[], int);
double mode1(double[], int);


int main()
{
    double a[10], b[10],m1,m2,m4,m5;//here we are declaring two arrays and other double values
    int i,n,m3,m6;
    printf("Enter number of elements: ");//asking the user to enter the number of elements
    scanf("%d",&n);//storing the value from user
    printf("Enter values for array A: ");//asking the user to enter values for array A
    for(i = 0; i < n; i++)//using this loop we store the values in array A
    {
        scanf("%lf",&a[i]);
    }
    
    printf("Enter values for array B: ");//asking the user to enter the value for array B
    for(i = 0; i < n; i++)//using this loop we store the values in array B
    {
        scanf("%lf",&b[i]);
    }
    
    printf("\n");
    
    m1 = mean(a,n);
    printf("Mean of A = %.2lf\n",m1);//here we are printing the mean of array A
    
    m2 = median(a,n);
    printf("Median of A = %.2lf\n",m2);//here we are printing the median of array A
    
    m3 = mode(a,n);
    printf("Mode of A = %.2d\n",m3);//here we are printing the mode of array A
    
    printf("\n");
    
    m4 = mean1(b,n);
    printf("Mean of B = %.2lf\n",m4);//here we are printing the mean of array B
    
    m5 = median1(b,n);
    printf("Median of B = %.2lf\n",m5);//here we are printing the median of array B
    
    m6 = mode1(b,n);
    printf("Mode of C = %.2d\n",m6);//here we are printing the mode of array B
    
    printf("\n");
    
    if((m1 > m4) && (m2 > m5) && (m3 > m6))//here we check whether the mean, median and mode of array A is greater then array B or not
        printf("You are playing more video games, you have to spend more time studying\n");//if condition satisfies we print following ststement
    else if((m4 > m1) && (m5 > m2) && (m6 > m3))//here we check whether the mean, median and mode of array B is greater then array A or not
        printf("Good, you are spending considerable time on studies \n");//if condition satisfies we print following ststement
    else
        printf("Sorry cant compare\n");//if no condition satisfies we print folloeing statement
    return 0;
}


double mean(double a[], int n)//here we create a function that calculates the mean value of array A
{
    int i;
    double sum = 0;
    for(i = 0; i < n; i++)//here we go through each value in the array and keep on adding them
        sum = sum + a[i];
    return (sum/n);//here we return the value of mean
    
}

double median(double a[], int n)//here we create a function that calculates the median value of array A
{
    double temp;
    int i,j;
    for(i = 0; i < n; i++)//using this for loop we go through each value in the array and bubble sort them to find the median
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] >= a[j])//if the value at place 1 is greater then value at place 2 we bubble sort it
            {
                temp = a[j];//bubble sorting
                a[j] = a[i];
                a[i] = temp;
                
            
            }
        }
    }
    if(n%2==0)//if the size is divisible by 2 we find the median by adding the middle two values and dividing it by 2
        return (a[n/2]+a[n/2-1])/2;
    else
        return a[n/2];//if the size is not divisible by 2, we just print the middle element
}

double mode(double a[], int n)//here we create a function that calculates the mode value of array A
{
    
    int i,j,ma=0,c=0,tm=0,mod=0;//declaring and initializing integer variables

    
    for(i = 0; i < n; i++)
    {
        tm = a[i];//here we are assigning the value of array b to tm
        c=0;
    
        for(j = 0; j < n; j++)//we go through this loop to check whether the value is repeated in the array or not
        {
            if(a[j] == tm)//id the 2 values equals each other, we found the value
                c++;
        }
        if(c > ma)
        {
            ma = c;
            mod = a[i];
        }
    }
    return mod;//here we return the value of mod
}

double mean1(double b[], int n)//here we create a function that calculates the mean value of array B
{
    int i;
    double sum = 0;
    for(i = 0; i < n; i++)//here we go through each value in the array and keep on adding them
        sum = sum + b[i];
    return (sum/n);//here we return the value of mean
    
}

double median1(double b[], int n)//here we create a function that calculates the median value of array B
{
    double temp;
    int i,j;
    for(i = 0; i < n; i++)//using this for loop we go through each value in the array and bubble sort them to find the median

    {
        for(j = i+1; j < n; j++)
        {
            if(b[i] >= b[j])//if the value at place 1 is greater then value at place 2 we bubble sort it
            {
                temp = b[j];//bubble sorting
                b[j] = b[i];
                b[i] = temp;
                
            
            }
        }
    }
    if(n%2==0)//if the size is divisible by 2 we find the median by adding the middle two values and dividing it by 2
        return (b[n/2]+b[n/2-1])/2;
    else
        return b[n/2];//if the size is not divisible by 2, we just print the middle element
}

double mode1(double b[], int n)//here we create a function that calculates the mode value of array B
{
    
    int i,j,ma=0,c=0,tm=0,mod=0;//declaring and initializing integer variables
    
    for(i = 0; i < n; i++)//we go through this for loop and check for multiple conditions
    {
        tm = b[i];//here we are assigning the value of array b to tm
        c=0;
    
        for(j = 0; j < n; j++)//we go through this loop to check whether the value is repeated in the array or not
        {
            if(b[j] == tm)//id the 2 values equals each other, we found the value
                c++;
        }
        if(c > ma)
        {
            ma = c;
            mod = b[i];
        }
    }
    return mod;//here we return the value of mod
}



