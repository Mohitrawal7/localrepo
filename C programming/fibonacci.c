#include<stdio.h>



int main() {
    int n;
    printf("enter n (n>2) :");
    scanf("%d",&n);

    int fib[n];
    fib[0] =0;
    fib[1]=1;
    if(n==1){
        printf("0");
        break;
    }
    if(n==2){
printf("0,1");
break;
}
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
    }
    printf
    return 0;
}