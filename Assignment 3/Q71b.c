#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void displayTopStudents(struct Student s[], int n) {
    int i;
    printf("\nStudents with marks greater than 500:\n");
    for (i = 0; i < n; i++) {
        if (s[i].marks > 500) {
            printf("Roll: %d, Name: %s, Marks: %.2f\n",
                   s[i].roll, s[i].name, s[i].marks);
        }
    }
}

int main() {
    struct Student students[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    displayTopStudents(students, 10);

    return 0;
}