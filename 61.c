// C Program to store the details of a student in a structure and displays the same
#include <stdio.h>
struct students
{
    char name[50];
    int roll_no;
};
int main()
{
    struct students s;

    printf("Enter the nameof a student\n");
    scanf("%s", &s.name);
    printf("Enter the roll number\n");
    scanf("%d", &s.roll_no);

    printf("Student details:\nRoll No.\tName\n%d\t\t%s", s.roll_no, s.name);

    return 0;
}