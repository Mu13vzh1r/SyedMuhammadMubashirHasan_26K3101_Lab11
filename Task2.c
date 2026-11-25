#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float marks;
    int rollNo;
}Student;

int main()
{
    int numStudents = 0;
    Student *studentInfo;
    float totalMarks = 0;

    printf("Enter the total number of students:");
    scanf("%d", &numStudents);

    studentInfo = (Student*)calloc(numStudents, sizeof(Student));

    if (studentInfo == NULL)
    {
        printf("Could not allocate memory.");
        return 1;
    }

    for (int i = 0; i<numStudents; i++)
    {
        printf("\nEnter [Roll Number] [Marks]: ");
        scanf("%d %f", &studentInfo[i].rollNo, &studentInfo[i].marks);
    }

    printf("\nSTUDENT RECORDS:");

    for (int i = 0; i<numStudents; i++)
    {
        printf("\nRoll Number: %d\tMarks: %.2f", studentInfo[i].rollNo, studentInfo[i].marks);
        totalMarks += studentInfo[i].marks;
    }

    printf("\n\nAverage Marks: %.2f", totalMarks/numStudents);

    free(studentInfo);

    return 0;

}