#include<stdio.h>
#include<conio.h>
int main() {
    int k=8;
char star='*';
char *ptr=&star;
printf("ptr=%u\n",ptr);
ptr++;
printf("ptr=%u\n",ptr);
ptr--;
printf("ptr=%u\n",ptr);
ptr=ptr+26;
printf("ptr=%u\n",ptr);
    return 0;
}