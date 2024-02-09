#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];};

    int main() {

struct student ece[100];
ece[0].roll=1664;
ece[0].cgpa=9.8;
//s1.name="Mohit";
strcpy(ece[0].name,"mohit");

printf("student name is %s\n",ece[0].name);
printf("student roll no is %d\n",ece[0].roll);
printf("student cgps is %f\n",ece[0].cgpa);

struct student s1={599,9.6,"Aarju"};
printf("%s\n",s1.name);
struct student *ptr=&s1;
printf("%s",(*ptr).name);
return 0;
}