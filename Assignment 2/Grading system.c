#include <stdio.h>
#include <stdlib.h>

int main()
{   char studentname[20];
    int marks[5];
    char grades[5];
    char subjects[5][30]=
    {
        "Programming",
        "Mathematics",
        "Computer Application",
        "Communication",
        "Networking"
    };
    int total=0;
    double average;
    char overallgrade;

    printf("Enter student name\n");
    scanf("%s", studentname);
    printf("Enter student marks in the following order");
    printf("\n1.Programming\n");
    printf("2.Mathematics\n");
    printf("3.Computer Application\n");
    printf("4.Communication\n");
    printf("5.Networking\n");

    for(int i=0;i<5;i++)
    {
        scanf("%d", &marks[i]);
        if(marks[i]>=80)
        {
            grades[i]= 'A';
        }
        else if(marks[i]>=70)
        {
            grades[i]= 'B';
        }
        else if(marks[i]>=60)
        {
            grades[i]= 'C';
        }
        else if(marks[i]>=50)
        {
            grades[i]= 'D';
        }
        else
        {
            grades[i]= 'E';
        }
    }
    for(int i=0;i<5;i++)
    {
        total= total + marks[i];
    }
    average= total/5;
    if(average >=80)
    {
        overallgrade= 'A';
    }
    else if(average >=70)
    {
        overallgrade= 'B';
    }
    else if(average >=60)
    {
        overallgrade= 'C';
    }
    else if(average >=50)
    {
        overallgrade= 'D';
    }
    else
    {
        overallgrade= 'E';
    }
    printf("Student name: %s\n", studentname);
    printf("---------------------------------------------------\n");
    printf("%-20s %5s %5s\n","Subject","Mark","Grade");

    for(int i=0;i<5;i++)
    {
        printf("\n%-20s %5d %5c\n",subjects[i],marks[i],grades[i]);
    }
    printf("====================================================\n");
    printf("Total= %d\n",total);
    printf("Average= %.2f\n", average);
    printf("Overall Grade= %c\n",overallgrade);

    if(average>=50)
    {
        printf("Status: Pass\n");
    }
    else
    {
        printf("Status: Fail\n");
    }


    return 0;
}
