#include <stdio.h>
#include <stdlib.h>

struct StudentData
{
    int id;
    char first_name[10];
    char last_name[10];
    int DateOfBirth[3];
    char gender;
    int math1;
    int math2;
    int cs;
    int is;
    int pl;
};

int main()
{
    struct StudentData student[200];

    int choice, ID, i = 0, counter = 0; // counter -> for count number of students
    float Math1 = 0, Math2 = 0, IS = 0, CS = 0, PL = 0;

    printf("+---------------------+\n|       Welcome       |\n+---------------------+\n\n");
    do
    {

    s:
        printf("1-Add Student to DB.\n2-Search for Student.\n3-Print.\n4-Statistics.\n0-Exit.\n");
        printf("Enter your choise: ");
        scanf("%d", &choice);

        if (choice > 4 || choice < 0)
        {
            printf("Wrong choice!.....\nChoose again.\n\n");
            goto s;
        }
        ///---------------------------------------------------------------------------------------------------------------------------------
        switch (choice)
        {
        case 1:
            while (1)
            {
                printf("\nstudent ID: ");
                scanf("%d", &student[i].id);
                printf("student first name: ");
                scanf("%s", &student[i].first_name); // -> fflush(stdin);   gets(&student[i].first_name) ;
                printf("student last name: ");
                scanf("%s", &student[i].last_name);
                printf("student Date Of Birth: ");
                scanf("%d %d %d", &student[i].DateOfBirth[0], &student[i].DateOfBirth[1], &student[i].DateOfBirth[2]);
                printf("student gender: ");
                scanf(" %c", &student[i].gender);
                printf("student score in math1: ");
                scanf("%d", &student[i].math1);
                Math1 += student[i].math1;
                printf("student score in math2: ");
                scanf("%d", &student[i].math2);
                Math2 += student[i].math2;
                printf("student score in Intro to CS: ");
                scanf("%d", &student[i].cs);
                CS += student[i].cs;
                printf("student score in Intro to IS: ");
                scanf("%d", &student[i].is);
                IS += student[i].is;
                printf("student score in Intro to PL: ");
                scanf("%d", &student[i].pl);
                PL += student[i].pl;

                printf("student data has been saved.....\n\n");

                counter++;
                break;
            }

            break;
            //-------------------------------------------------------------------------------------------------------------------------------
        case 2:
            printf("+----------------------+\n|        Search        |\n+----------------------+\n\n");
            printf("Enter student id: ");
            scanf("%d", &ID);

            for (i = 0; i < 200; i++)
            {
                if (ID == student[i].id)
                {
                    printf("student name: %s %s\n", student[i].first_name, student[i].last_name);
                    printf("student DOB: %d-%d-%d\n", student[i].DateOfBirth[0], student[i].DateOfBirth[1], student[i].DateOfBirth[2]);
                    printf("student gender: %c\n", student[i].gender);
                    printf("student score in math1: %d\n", student[i].math1);
                    printf("student score in math2: %d\n", student[i].math2);
                    printf("student score in Intro to CS: %d\n", student[i].cs);
                    printf("student score in Intro to IS: %d\n", student[i].is);
                    printf("student score in Intro to PL: %d\n--------------\n", student[i].pl);
                    break;
                }
            }

            break;
            //-------------------------------------------------------------------------------------------------------------------------------
        case 3:
            printf("+------------------+\n|       Print      |\n+------------------+\n");

            for (i = 0; i < counter; i++)
            {
                printf("Student #%d:- \n", i + 1);
                printf(" ID: %d\n", student[i].id);
                printf(" Name: %s %s\n", student[i].first_name, student[i].last_name);
                printf(" Gender: %c\n", student[i].gender);
                printf(" Age: %d\n", 2021 - student[i].DateOfBirth[2]);
                printf(" score in math1: %d\n", student[i].math1);
                printf(" score in math2: %d\n", student[i].math2);
                printf(" score in Intro to CS: %d\n", student[i].cs);
                printf(" score in Intro to IS: %d\n", student[i].is);
                printf(" score in Intro to PL: %d\n++++++++++++\n", student[i].pl);
            }
            break;
            //-------------------------------------------------------------------------------------------------------------------------------
        case 4:
            printf("+------------+\n|    Stats   |\n+------------+\n");

            printf("Total number of students in DB: %d\n", counter);
            printf("Average students score in Math1: %f\n", Math1 / counter);
            printf("Average students score in Math2: %f\n", Math2 / counter);
            printf("Average students score in Intro to CS: %f\n", CS / counter);
            printf("Average students score in Intro to IS: %f\n", IS / counter);
            printf("Average students score in Intro to PL: %f\n---------------\n", PL / counter);
        }

        i++;
    } while (choice != 0);

    return 0;
}
