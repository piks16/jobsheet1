//by fikri
#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

void display(struct student s);

int main()
{
    struct student s1;
    printf("Enter name: ");
    scanf("%s", &s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    display(s1); // passing structure as an argument
    return 0;
}

// membuat fungsi dengan struct sebagai parameter
void display(struct student s)
{
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}

