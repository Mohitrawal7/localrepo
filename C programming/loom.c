#include<stdio.h>
int main() {
FILE *fptr;
fptr=fopen("nest.txt","r");
int n;
fscanf(fptr,"%d",&n);
printf("number=%d\n",n);
fscanf(fptr,"%d",&n);
printf("number=%d\n",n);
fscanf(fptr,"%d",&n);
printf("number=%d\n",n);
fscanf(fptr,"%d",&n);
printf("number=%d\n",n);
fscanf(fptr,"%d",&n);
printf("number=%d\n",n);
fclose(fptr);
    return 0;
}