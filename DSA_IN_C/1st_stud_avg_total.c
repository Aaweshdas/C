// write a c program to find total,average of n students using structures
#include <stdio.h>
struct Student {
    char Name[20];
    int age;
    int marks;
};
int main()
{
    int n, totalMarks = 0;
    float average;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, age, and marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].Name, &students[i].age, &students[i].marks);
        totalMarks += students[i].marks;
    }
    average = (float)totalMarks / n;
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", average);
    return 0;
}