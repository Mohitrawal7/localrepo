#include<stdio.h>
#include<string.h>
int main() {
char oldstr[]="Anana";
char newstr[]="Apple";
printf("%d\n",strcmp (newstr,oldstr));
printf("%d",strcmp (oldstr,newstr));
    return 0;
}