#include<stdio.h>
#include<string.h>

typedef struct Computerengineeringstudent {
int roll;
float cgpa;
char name[100];
} ces ;
int main() {
ces s1;
s1.roll=39;
s1.cgpa=9.7;
strcpy(s1.name,"sadhya");

printf("student name is %s\n",s1.name);
printf("%d\n",s1.roll);
printf("%f\n",s1.cgpa);
}