#include <stdio.h>

int main () {
    int marks;
    printf ("enter marks\n");
    scanf ("%d",&marks);
    if (marks<30)
    printf("fail or C");
else if(marks>=30&&marks<70)
printf ("B grade");
else if (marks>=70&&marks<=80)
printf("B+ grade");
else if (marks>=80&&marks<=90)
printf("A grade");
else if (marks>=90&& marks<= 100)
printf("A+ grade");
else 
printf("invalid");
return 0 ;
}