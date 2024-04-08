#include<stdio.h>

int main() {
int n,i,j;
printf("enter the number : ");
scanf("%d",&n);
if(n==0 || n==1){
    j=1;
}
for(i=2;i<=(n/2);i++){
    if(n%i==0){
        j=1;
    }
    else
    j=0;
}
 if ( j ==0) {
printf("It is prime");}
else 
printf("not prime");
    return 0;
}