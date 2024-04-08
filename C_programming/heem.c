#include<stdio.h>
int main() {
FILE *fptr;
fptr=fopen("test.txt","r");
printf("%c",fgetc(fptr));
fptr=fopen("test.txt","w");
fputc('M',fptr);
fputc('A',fptr);
fputc('N',fptr);
fputc('G',fptr);
fputc('O',fptr);
/*fprintf(fptr,"%c",'M');
fprintf(fptr,"%c",'a');
fprintf(fptr,"%c",'n');
fprintf(fptr,"%c",'g');
fprintf(fptr,"%c",'o');*/
fclose(fptr);
    return 0;
}