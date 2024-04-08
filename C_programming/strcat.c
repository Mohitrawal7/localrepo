#include<stdio.h>
#include<string.h>
int main() {
char oldstr[100]="Hello";
char newstr[]="World";
strcat (oldstr,newstr);
puts(oldstr);
    return 0;
}