// to initialize the members of structure
#include <stdio.h>
struct employee
{
    char name[25];
    int hireDate;
    float salary;
};
int main()
{
    struct employee member = {"Maitreyi Singh", 100694, 400000};
    printf("The details of employee :\n");
    printf("Name : %s\n", member.name);
    printf("Hire Date : %d\n", member.hireDate);
    printf("Salary : %.2f\n\n", member.salary);
    printf("Enter the details of second employee ->\n");
    printf("Name : ");
    scanf("");
    gets(member.name);
    printf("Hire Date : ");
    scanf("%d", &member.hireDate);
    printf("Salary : ");
    scanf("%f", &member.salary);
    printf("\n\n\tEmployee details\nName     \t%s\nHire Date\t%d\nSalary   \t%.2f\n", member.name, member.hireDate, member.salary);
    return 0;
}