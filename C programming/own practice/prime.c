#include<stdio.h>
int main() {
    int i,j;
printf("print numbers between 1 to 100 are :\n");
for(i=2;i<=100;i++){
for(j=2;j<=i;j++) 
{
    if (i%j==0){
        break;
    }
}
if(i==j){
    printf("%d\t",i);
}
}
return 0;
}