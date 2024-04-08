#include<stdio.h>
int main() {
FILE *fptr;
fptr=fopen("test.txt","r");
/*if(fptr==NULL){
    printf("File doesn't exist");
}else{
    fclose(fptr);
}*/
char ch;
int c;
/*fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);
fscanf(fptr,"%c",&ch);
printf("character =%c\n",ch);*/
fscanf(fptr,"%c",&ch);
printf("%c",ch);
fscanf(fptr,"%c",&ch);
printf("%c",ch);
fscanf(fptr,"%c",&ch);
printf("%c",ch);
fscanf(fptr,"%d",&c);
printf("%d",c);
fscanf(fptr,"%d",&c);
printf("%d",c);
fclose(fptr);
    return 0;
}