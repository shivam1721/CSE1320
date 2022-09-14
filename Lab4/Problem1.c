#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

void print(char **FirstName,char **LastName,float *score,int nRec);
void AddNewRecord(char **FirstName,char **LastName,float *score,int nRec);
void DeleteRecord(char **FirstName,char **LastName,float *score,int num);
void SearchByLastName(char **FirstName,char **LastName,float *score,int num);
void sort(char **FirstName,char **LastName,float *score,int nRec);
void SortAndPrint(char **FirstName,char **LastName,float *score,int nRec);
void SortByLastName(char **FirstName,char **LastName,float *score,int nRec);
void FindMedianScore(char **FirstName,char **LastName,float *score,int nRec);

int main()
{
    int num;
    printf("Enter the number of student records you want to enter: ");
    scanf("%d",&num);
    char **FirstName;
    char **LastName;
    float *score;
    
    
if(num >= 5 && num <= 15)
    {
        FirstName = (char **)malloc(num* sizeof(char **));
        LastName = (char **)malloc(num* sizeof(char **));
        score = (float *)malloc(num* sizeof(float));
        
        int i;
        for(i = 0; i < num; i++)
        {
            FirstName[i] = (char **)malloc(20*sizeof(char));
            LastName[i] = (char **)malloc(20*sizeof(char));
        }
        printf("\nEnter student data for %d students with format first name last name score:\n",num);//taking in student data for number of students
        
        for(i = 0; i < num; i++)// loop goes through all the rows and stores the data
        {
            printf("Student: %d\n",i+1);
            scanf("%s %s %f",(FirstName[i]),(LastName[i]),&score[i]);//scanning first name, last name and score in order
            printf("\n");
        }
        
        int n;
        
        while(true)// if the while condition satisfies, we go through the loop
        {

            printf("Print records (press 1)\nAdd new record (press 2)\nDelete record(s) (press 3)\nSearch by last name (press 4)\nSort by score (press 5)\nSort by last name (press 6)\nFind median score(press 7)\nExit the program (press 0)\n ");
            printf("\n");
            printf("Enter your choice: ");
            
            scanf("%d",&n);//scanning the choice of user
            if (n == 1)// if user enters one, we print the student record
            {
                print(FirstName,LastName,score,num);//function to print all records
            }
            //printf("\n");
            
            if (n == 2)// if user enters one, we print the student record
            {
                AddNewRecord(FirstName, LastName, score, num);//function to add new record
                num++;
            }
            //printf("\n");

            if (n == 3)// if user enters one, we print the student record
            {
                DeleteRecord(FirstName, LastName, score, num);//function to delete record
            }
            //printf("\n");


            if(n == 4)// if user enters 4, we search it with last name and print it
            {
                SearchByLastName(FirstName,LastName,score,num);// function to search by last name and print it
            }
            //printf("\n");

            if(n == 5)// if user enters 5, we sort by score and print the data
            {
                SortAndPrint(FirstName,LastName,score,num);// function to print the sorted data by score
            }
           // printf("\n");

            if(n == 6)// if user enters 6, we sort by last name and print data
            {
                SortByLastName(FirstName,LastName,score,num);// function to sort by last name and print data
            }
            //printf("\n");

            if(n == 7)// if user enters 7, we calculate the median score
            {
                FindMedianScore(FirstName,LastName,score,num);// function to calculate the median score
            }
            printf("\n");

            if(n == 0)// if user enters 0, we stop the program
            {
                break;
            }
        }
    }
    else
    {
            printf("Please enter minimum 5 student record and maximum 15 records");
    }


    }

void print(char **FirstName,char **LastName,float *score,int num)//this function is used to print all the record of students that user entered
{
    int i;
    printf("Printing Records \n");
    printf("\n");
    
    for(i = 0; i < num; i++)//this loop is used to print all the student info in order
    {
        printf("First Name: %s, Last Name: %s, Score: %.2f\n",FirstName[i],LastName[i],score[i]);//printing the info as first name, last name and score
    }
}


void AddNewRecord(char **FirstName,char **LastName,float *score,int num)//function to add a new record
{
    int i;
    printf("Add Record \n");
    printf("\n");
    printf("Enter the student info you want to add in the following order, First Name, Last Name, Score: \n");//asking the suer to enter the data
    FirstName[num] = malloc(20*sizeof(char));// allocating the memory using mallac
    LastName[num] = malloc(20*sizeof(char));// allocating the memory using malloc
    
    scanf("%s %s %f",FirstName[num], LastName[num], &score[num]);// storing the data of student
    printf("\n");
    printf("List after the record was added: \n");
        for(i = 0; i < num+1; i++)// this for loop prints the data after the record is added
            printf("First Name: %s, Last Name: %s, Score: %2.1f \n",*(FirstName+i),*(LastName+i),*(score+i));
}
    
 

void DeleteRecord(char **FirstName,char **LastName,float *score,int num)
{
    char *delete;
    int i = 0, j = 0;
    delete = malloc(sizeof(char)*20);// allocating memory to delete varible using malloc
    printf("Delete Record \n");
    printf("\n");
    printf("Enter the last name of student you wish to delete: ");// asking the user for which data to delete
    scanf("%s",delete);// scanning the last name of student
    printf("\n");
    
    for(i = 0; i < num; i++)// this for loop goes through all the values and search for the same value
    {
        if(strcmp(LastName[i],delete) == 0)// here we compare all the last names with the one user entered
        {
            for(j = i; j < num-1; j++)// if the last name matches, the record will be deleted
            {
                strcpy(FirstName[j], FirstName[j+1]);
                strcpy(LastName[j], LastName[j+1]);
                score[j] = score[j+1];
            }
            num--;
            
        }
    }
    
    printf("List after the record was deleted:\n");
    for(i = 0; i < num; i++)// we use this for loop to print the student data after the following data is deleted
        printf("First Name: %s, Last Name: %s, Score: %2.1f \n",*(FirstName+i),*(LastName+i),*(score+i));
}
 

void SearchByLastName(char **FirstName,char **LastName,float *score,int num)//in this function we find the name of student by taking last name from user
{

  int i;
  char *string;
  string = (char *)malloc(20*sizeof(char));// allocating memory to String varible using malloc
  printf("Search by Last Name \n");
  printf("\n");
  printf("Enter the Last Name: ");//asking the user to enter the last name
  scanf("%s",string);//storing the last name from user
  printf("\n");
  for(i = 0; i < num; i++)//this loop goes through all the values and checks for the last name
   {
      if(strcmp(LastName[i],string) == 0)//here we search for the name given by user to the one stored in records and compare it, if found we print the student info
      {
           printf("First Name: %s, Last Name: %s, Score: %.2f\n",FirstName[i],LastName[i],score[i]);//here we print the name found along with score
      }
   }
 }


void sort(char **FirstName,char **LastName,float *score,int num)//in this function we are sorting the student score and printing the student info
{
    int i,j;
    float temp;
    char *TempString;
    TempString = (char*)malloc(20*sizeof(char));// allocating memory to tempString varible using malloc
    for(i = 0; i < num; i++)//this loop goes through all the rows
    {
        for(j = 0; j < num-i-1; j++)//this loop goes through all the columns
        {
            if(score[j] > score[j+1])//here we are checking for the condition whether the score at place i is greater then score at i+1 or j
            {
                temp = score[j];//if the above condition satisfies we bubble sort the score here
                score[j] = score[j+1];
                score[j+1] = temp;

                strcpy(TempString,FirstName[j]);//if the above condition satisfies we bubble sort the first name here
                strcpy(FirstName[j],FirstName[j+1]);
                strcpy(FirstName[j+1],TempString);


                strcpy(TempString,LastName[j]);//if the above condition satisfies we bubble sort the last name here
                strcpy(LastName[j],LastName[j+1]);
                strcpy(LastName[j+1],TempString);
            }
        }
    }
}


void SortAndPrint(char **FirstName,char **LastName,float *score,int num)// this function is used to sort data and print it
{
    sort(FirstName,LastName,score,num);// sorting the data
    printf("Sorting by score \n");
    printf("\n");
    print(FirstName,LastName,score,num);// printing the data
}


void SortByLastName(char **FirstName,char **LastName,float *score,int num)//in this function we are sorting by the student last name and printing the student info
{
    int i,j;
    float temp;
    char *TempString;
    TempString = (char*)malloc(20*sizeof(char));// allocating memory to tempString varible using malloc
    for(i = 0; i < num-1; i++)//this loop goes through all the rows
    {
        for(j = i+1; j < num; j++)//this loop goes through all the columns
        {
            if(strcmp(LastName[i],LastName[j]) > 0)//here we are checking for the condition whether the name at place i is greater then score at j
            {
                temp = score[i];//if the above condition satisfies we bubble sort the score here
                score[i] = score[j];
                score[j] = temp;

                strcpy(TempString,FirstName[i]);//if the above condition satisfies we bubble sort the first name here
                strcpy(FirstName[i],FirstName[j]);
                strcpy(FirstName[j],TempString);


                strcpy(TempString,LastName[i]);//if the above condition satisfies we bubble sort the last name here
                strcpy(LastName[i],LastName[j]);
                strcpy(LastName[j],TempString);
            }
        }
    }
    printf("Sorting by Last Name \n");
    printf("\n");
    print(FirstName,LastName,score,num);//here we print the sorted student data
}


void FindMedianScore(char **FirstName,char **LastName,float *score,int num)// we use this function to find median score
{
  sort(FirstName,LastName,score,num);
  int i;
  float median = 0;

  if (num % 2 == 0)// checking if median is divisible by 2
     {
        median = (score[(num-1)/2] + score[num/2])/2.0;// we use this formula to calculate the median
     }
  else
     {
         median = score[num/2];// if the if condition does not satisy we use this formula
     }
  printf("The median score is %f. ",median);// here we print out the median score
  printf("Students with score more than median score: \n");// here we print the students who has score more than median score
  for(i = 0; i < num; i++)// loop goes though all the rows
  {
      if(score[i] > median)// here we check which student has score more than median score
      {
          printf("First Name: %s, Last Name: %s, Score: %.2f\n",FirstName[i],LastName[i],score[i]);// printing students whose score is more than median score
      }
  }

}

    
