#include<stdio.h>
void printstring(char arr[]);
int main() {
char name[]={'M','O','H','I','T','\0'};
    char college[]="RADIANT";
    printstring(name);
    printf("%s",college);
    return 0;
}
void printstring(char arr[]){
    for(int i=0;arr[i]!='\0' ;i++){
printf("%c",arr[i]);
    }
    printf("\n");
}