#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

 struct student //defining structure student
 {
     char FirstName[20];
     char LastName[20];
     char ZipCode[10];
     float score;
     struct student *next;//pointer for iterating over next node

 };
 

void AddRecord(struct student **head)//function for adding student record
{
    struct student *new,*temp;
    new=(struct student*)malloc(sizeof(struct student));


    printf("Enter the First Name of the Student: ");
    scanf("%s",new->FirstName);
    printf("Enter the Last Name of the Student: ");
    scanf("%s",new->LastName);
    printf("Enter the Zip Code of the Student: ");
    scanf("%s",new->ZipCode);
    printf("Enter the Score of the Student: ");
    scanf("%f",&new->score);

    printf("\n");
    if(*head == NULL)
    {
         *head = new;
         (*head)->next=NULL;
    }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=new;
        new->next=NULL;

    }

}


void DeleteRecord(struct student **head) //function to delete particular student record
{
    struct student *temp1=*head;
    struct student *temp2;

    char LastName[20];
    printf("Please enter the Last name of the student you wish to delete: "); //asking user for the last name, it wish to delete
    scanf("%s",LastName);
    while(temp1!=NULL)
    {
        if(strcmp(temp1->LastName,LastName)==0)// this compares the last name entered by user in the records and find the one that matches and deletes the record
        {
            if(temp2==NULL)
            {
                temp1=temp1->next;
                free(temp1);
                temp1=head;
                temp2=NULL;

            }
            else
            {
                temp2->next=temp1->next;
                free(temp1);
                temp1=temp1->next;

            }
        }
        else
        {
            temp2=temp1;
            temp1=temp2->next;
        }

    }
    printf("\n");

}


void PrintRecords(struct student *head) //function to print records
{
    struct student *temp=head;
    while(temp!=NULL)
    {
        printf("First Name :%s, Last Name: %s, Score: %0.2f, Zip code: %s\n",temp->FirstName,temp->LastName,temp->score,temp->ZipCode);
        temp=temp->next;// printing the data
    }
    printf("\n");
}



void SearchByZipCode(struct student *head) //function to print the student data based on the zip code provided by the user
{
   struct student *temp=head;
   char zipTemp[20];
   printf("\nEnter zip code : ");
   scanf("%s",zipTemp);
   while(temp!=NULL)
   {
       if(strcmp(temp->ZipCode,zipTemp)==0)// this compares the zipcode entered by user in the records and find the one that matches
           printf("First Name :%s, Last Name: %s, Score: %0.2f, Zip code: %s\n",temp->FirstName,temp->LastName,temp->score,temp->ZipCode);// printing the data
   
       temp=temp->next;
   }
    printf("\n");
}


void SearchByScore(struct student *head)//function searches for score based on min and max score entered by user
{
   struct student *temp=head;
   float max,min;
   printf("Enter Minimum Score: ");
   scanf("%f",&min);// taking minimum score from user
   printf("Enter Maximum Score: ");
   scanf("%f",&max);// taking maximum score from user
   while(temp!=NULL)
   {
       if(temp->score>=min && temp->score<=max)// this compares the score entered by user in the records and find the one that matches
       {
           printf("First Name :%s, Last Name:%s,Score:%0.2f, Zip code :%s\n",temp->FirstName,temp->LastName,temp->score,temp->ZipCode);// printing the data
       }
       
       temp=temp->next;
   }
    printf("\n");

}


void MedianScore(struct student *head) //function to find median of student data
{
   float median,temp;
   int size=0;
   int i,j;
   int count=0;
   float scores[100];
   while(head!=NULL)
   {
       scores[size++]=head->score;
       head=head->next;
   }

   for(i=0;i<size;i++)// the loop goes through all the values
   {
       for(j=0;j<size-i-1;j++)
        {
            if(scores[j]>scores[j+1])
                {
                    temp=scores[j];
                    scores[j]=scores[j+1];
                    scores[j+1]=temp;
                }
        }
   }

   if(size%2==0)
   {
     median=((scores[(size/2)]+scores[(size/2)-1])/2);// calculating median
   }
   else
   {
      median=(scores[(size/2)]);// calculating median
   }

   printf("Median is %0.2f\n",median);
   printf("\n");
   for(i=0;i<size;i++)
   {
     if(scores[i]>median)
     {
        count++;
     }

   }
   printf("Students with score more than median score: %d\n",count);
   printf("\n");
}

int main()

{
   struct student *head=NULL;
   int nRec,i;
   printf("Enter the number of student records you want to enter: ");//asking the user, number of records they want to enter
   scanf("%d",&nRec);

   if(nRec>=5) //for taking minimum of 5 records from user
   {

     for(i=0;i<nRec;i++)
     {
        AddRecord(&head);
     }

     printf("\n");

     int n;

     printf("\n");
     while (true)
     {
         // menu for the user to choose from
         printf("Print Records(press 1)\n");
         printf("Add a New Records(press 2)\n");
         printf("Delete Records(press 3)\n");
         printf("Search by Zip Code(press 4)\n");
         printf("Search by Score Range(press 5)\n");
         printf("Find Median Score (press 6)\n");
         printf("Exit the program(press 0)\n\n");
         printf("\n");

         //asking the user about functionality to enter
         printf("Enter number for the functionality: ");
         scanf("%d",&n);
         printf("\n");
         if(n==0)
         {
           break;
         }
         if(n==1)
         {
             PrintRecords(head);// this prints the records of data
         }
         if(n==2)
         {
             AddRecord(&head);// this function adds the data
         }
         if(n==3)
         {
             DeleteRecord(&head);// here it delets the data
         }
         if(n==4)
         {
             SearchByZipCode(head);// this function ask for zip code and search the following data
         }
         if(n==5)
         {
             SearchByScore(head);// this is to search by score
         }
         if(n==6)
         {
             MedianScore(head);// this is to display the median score
         }

     }

   }
   else
   {
       printf("Please enter minimum of 5 records\n");
   }
}
