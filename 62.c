// C Program to store the details of all students in an array of structure and  display same in a tabular format
#include <stdio.h>
struct students
{
    char name[50];
    int roll_no;
    char grade;
};
int main()
{
    struct students s[70];
    int n, i;
    printf("Enter the number of students\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d\n", i + 1);
        scanf("%s", &s[i].name);
        printf("Enter roll number of student %d\n", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter grade of student %d\n", i + 1);
        getchar();
        scanf("%c", &s[i].grade);
    }
    printf("\nRoll No.\tName\t\tGrade\n");
    for (i = 0; i < n; i++)
        printf("%d\t\t%s\t\t%c\n", s[i].roll_no, s[i].name, s[i].grade);

    return 0;
}