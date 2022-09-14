#include <stdio.h>
#include<string.h>

int getData(char fname[][20],char lname[][20],float score[]);
void printRecords(char fname[][20],char lname[][20],float score[],int size);
void searchByfirstname(char fname[][20],char lname[][20],float score[],int size);
void sortBylastname(char fname[][20],char lname[][20],float score[],int size);
void sortByScore(char fname[][20],char lname[][20],float score[],int size);
void searchBylastname(char fname[][20],char lname[][20],float score[],int size);
void MaxScore(char fname[][20],char lname[][20],float score[],int size);
void MinScore(char fname[][20],char lname[][20],float score[],int size);



int getData(char fname[][20],char lname[][20],float score[])//the function which takes data from user that is student info
{
    int num = 0;

    int i;
    while(num < 5 || num > 15)//setting the condition between 5 and 15 as we want records between that value
    {
        printf("please indicate number of records you want to enter, min 5, max 15: ");//asking user to enter value
        scanf("%d",&num);//taking the value from user
        if( num < 5 || num > 15)//if the above condition is not true it would display this line
        {
            printf("minimum 5 and maximum 15 only");
        }
    }
    printf("\nEnter student data for %d students with format first name last name score:\n",num);//taking in student data for number od students
    for(i = 0; i < num; i++)
    {
        printf("Student: %d\n",i+1);
        scanf("%s %s %f",(fname[i]),(lname[i]),&score[i]);//scanning first name, last name and score in order
        printf("\n");
    }
    return num;//returning the number of student data
}


void printRecords(char fname[][20],char lname[][20],float score[],int size)//this function is used to print all the record of students that user entered
{
    int i;
    printf("\nStudent Data\n");
    for(i = 0; i < size; i++)//this loop is used to print all the student info in order
    {
        printf("First Name: %s Last Name: %s Score: %.2f\n",fname[i],lname[i],score[i]);//printing the info as first name, last name and score
    }
}


void searchByfirstname(char fname[][20],char lname[][20],float score[],int size)//in this function we find the name of student bt taking first name from user
{
    char nametosearch[20];
    int i;
    printf("\nEnter first name to search: ");//asking user to enter first name
    scanf("%s",nametosearch);//asking the user to enter the last name
    printf("\n");
    for(i = 0; i < size; i++)
    {
        if(strcmp(fname[i],nametosearch) == 0)//here we search for the name given by user to the one stored in records and compare it, if found we print the student info
        {
            printf("First Name: %s Last Name: %s Score: %.2f\n",fname[i],lname[i],score[i]);//here we print the name found along with score
            
        }
    }
}

void sortBylastname(char fname[][20],char lname[][20],float score[],int size)//in this function we are sorting by the student last name and printing the student info

{
    int i,j;
    float temps;
    char tempf[20],templ[20];
    printf("\nSorting by last name: \n");
    for(i = 0; i < size; i++)//this loop goes through all the rows
    {
        for( j = i; j < size; j++)//this loop goes through all the columns
        {
            if(strcmp(lname[i],lname[j]) > 0)//here we are checking for the condition whether the name at place i is greater then score at j
            {
                temps=score[i];//if the above condition satisfies we bubble sort the score here
                score[i] = score[j];
                score[j] = temps;
                
                strcpy(tempf,fname[i]);//if the above condition satisfies we bubble sort the first name here
                strcpy(fname[i],fname[j]);
                strcpy(fname[j],tempf );
                
                strcpy(templ,lname[i]);//if the above condition satisfies we bubble sort the last name here
                strcpy(lname[i],lname[j]);
                strcpy(lname[j],templ);
                
            }
        }
        printf("First Name: %s Last Name: %s Score: %.2f\n",fname[i],lname[i],score[i]);//here we print the sorted student data
        
    }
}


void sortByScore(char fname[][20],char lname[][20],float score[],int size)//in this function we are sorting the student score and printing the student info
{
    int i,j;
    float temps;
    char tempf[20],templ[20];
    printf("\nSorting by score: \n");
    for(i = 0; i < size; i++)//this loop goes through all the rows
    {
        for(j = i; j < size; j++)//this loop goes through all the columns
        {
            if(score[i] > score[j])//here we are checking for the condition whether the score at place i is greater then score at i+1 or j

            {
                temps = score[i];//if the above condition satisfies we bubble sort the score here
                score[i] = score[j];
                score[j] = temps;
                
                strcpy(tempf,fname[i]);//if the above condition satisfies we bubble sort the first name here
                strcpy(fname[i],fname[j]);
                strcpy(fname[j],tempf );
                
                strcpy(templ,lname[i]);//if the above condition satisfies we bubble sort the last name here
                strcpy(lname[i],lname[j]);
                strcpy(lname[j],templ);
                
            }
            
        }
        printf("First Name: %s Last Name: %s Score: %.2f\n",fname[i],lname[i],score[i]);//here we print the sorted student data
        
    }
}


void searchBylastname(char fname[][20],char lname[][20],float score[],int size)//in this function we find the name of student bt taking last name from user
{
    char nametosearch[20];
    int i;
    printf("\nEnter last name to search: ");//asking the user to enter the last name
    scanf("%s",nametosearch);//storing the last name from user
    printf("\n");
    for(i = 0; i < size; i++)//this loop goes through all the values and checks for the last name
    {
        if(strcmp(lname[i],nametosearch) == 0)//here we search for the name given by user to the one stored in records and compare it, if found we print the student info
        {
            printf("First Name: %s Last Name: %s Score: %.2f\n",fname[i],lname[i],score[i]);//here we print the name found along with score
            
        }
    }

}

void MaxScore(char fname[][20],char lname[][20],float score[],int size)//with the help of this function we find the maximum score of a student
{
    int i = 0;
    float max = 0;
    
    printf("\nPrinting Maximum score: \n");
    
    for(i = 0; i < size; ++i)//this loop goes through all the rows
    {
        if(score[i] > max)//here we check for the maximum score
        {
            max = score[i];//here we store the maximum score in max
        }
    }
    
    for(i = 0; i < size; ++i)//this loop goes through all the rows
    {
        if(score[i] == max)//here we check if there is any other value which equals the maximum value
        {
            printf("First Name: %s Last Name: %s Score: %.2f\n",fname[i],lname[i],score[i]);//here we print the record of a student with the maximum score
            
        }
    }
}


void MinScore(char fname[][20],char lname[][20],float score[],int size)//with the help of this function we find the minimum score of a student
{
    int i = 0;
    float min = 100;
    
    printf("\nPrinting Minimum score: \n");
    
    for(i = 0; i < size; ++i)//this loop goes through all the rows
    {
        if(score[i] < min)//here we check for the maximum score
        {
            min = score[i];//here we store the maximum score in min
        }
    }
    
    for(i = 0; i < size; ++i)//this loop goes through all the rows
    {
        if(score[i] == min)//here we check if there is any other value which equals the minimum value
        {
            printf("First Name: %s Last Name: %s Score: %.2f\n",fname[i],lname[i],score[i]);//here we print the record of a student with the maximum score
            
        }
    }
}


int main()
{
    int ch = 1;
    char fname[15][20];
    char lname[15][20];
    float score[15];
    int size = getData(fname,lname,score);//here we are declaring and initializing thr size
    while(ch != 0)//here if the condition doesnt satisfy we go through the loop
    {
        //here we have set up  menu for the user, user can choose whatever option he wants to choose
        printf("\nPrint Records (Press 1)");
        printf("\nSearch by first name (Press 2)");
        printf("\nSearch by last name (Press 3)");
        printf("\nSort by score (Press 4)");
        printf("\nSort by last name (Press 5)");
        printf("\nFind max score (Press 6)");
        printf("\nFind min score (Press 7)");
        printf("\nExit the program (Press 0)");
        printf("\nEnter your choice: ");
        printf("\n");
        fflush(stdin);
        scanf("%d",&ch);
        switch(ch)//here we go through different cases for the user
        {
            case 1://for case 1 we print all the studnet data
                printRecords(fname,lname,score,size);
            break;
            case 2://for case 2 we ask the user for first name, search for it and then print it
                searchByfirstname(fname,lname,score,size);
            break;
            case 3://for case 3 we ask the user for last name, search for it and then print it
                searchBylastname(fname,lname,score,size);
            break;
            case 4://for case 4 we sort the score and print student data
                sortByScore(fname,lname,score,size);
            break;
            case 5://for case 4 we sort the score and print student data
                sortBylastname(fname,lname,score,size);
            break;
            case 6://here we find the maximum score and print student data
                MaxScore(fname,lname,score,size);
            break;
            case 7://here we find the minimum score and print student data
                MinScore(fname,lname,score,size);
                break;
            default:
                if(ch != 0)
                {
                    printf("\ninvalid input\n");
                }
            break;
        }
    }

    return 0;
}

