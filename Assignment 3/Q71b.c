
#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int marks;
};

void read(struct student s[])
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
}

void display(struct student s[])
{
    int i;

    printf("\nStudents who scored more than 500:\n");

    for(i = 0; i < 10; i++)
    {
        if(s[i].marks > 500)
        {
            printf("\nRoll Number: %d", s[i].roll);
            printf("\nName: %s", s[i].name);
            printf("\nMarks: %d\n", s[i].marks);
        }
    }
}

int main()
{
    struct student s[10];

    read(s);
    display(s);

    return 0;
}
