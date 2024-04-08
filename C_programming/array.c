#include<stdio.h>
int main() {
//int marks1=97;
//int marks2=98;
//int marks3=89;

int marks[3];
    printf("enter physics :");
    scanf("%d", &marks[0]);

printf("enter chemistry :");
    scanf("%d", &marks[1]);
printf("enter maths : ");
    scanf("%d", &marks[2]);
printf("physics = %d, chemis=%d, maths=%d",marks[0],marks[1],marks[2]);

    return 0;
}