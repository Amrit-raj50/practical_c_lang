#include <stdio.h>

struct Student{
    char id[10];
    char name[20];
    int marks[3];
};

int main(){
struct Student s;


    printf("Enter Student id :");
    scanf("%s",&s.id);
    printf("enter the student name:");
    scanf("%s",&s.name);
    printf("enter the makrs of the student in 3 subject:");
    scanf("%d",s.marks[0]);
    scanf("%d",s.marks[1]);
    scanf("%d",s.marks[2]);

printf("----------------------------XXXXXXXX----------------\n");

    printf("Id : %s\n",s.id);
    printf("Name : %s\n",s.name);
    printf("Marks 1 : %d\n",s.marks[0]);
    printf("Marks 2 : %d\n",s.marks[1]);
    printf("Marks 3 : %d\n",s.marks[2]);

    return 0;
}