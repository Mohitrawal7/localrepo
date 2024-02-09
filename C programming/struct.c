#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main() {
struct student s1;
s1.roll=1664;
s1.cgpa=9.8;
//s1.name="Mohit";
strcpy(s1.name,"mohit");

printf("student name is %s\n",s1.name);
printf("student roll no is %d\n",s1.roll);
printf("student cgps is %f\n\n",s1.cgpa);

struct student s2;
s2.roll=1689;
s2.cgpa=7.8;
//s1.name="Mohit";
strcpy(s2.name,"Aarju");

printf("student name is %s\n",s2.name);
printf("student roll no is %d\n",s2.roll);
printf("student cgps is %f\n\n",s2.cgpa);

struct student s3;
s3.roll=1393;
s3.cgpa=8.8;
//s1.name="Mohit";
strcpy(s3.name,"Sita");

printf("student name is %s\n",s3.name);
printf("student roll no is %d\n",s3.roll);
printf("student cgps is %f\n\n",s3.cgpa);

    return 0;
}