#include<stdio.h>
int main() {
    int i,j,pam;
int n[3][3]={
    {1,2,3},{4,5,6},{7,8,9}
    };
for (i=0;i<3;i++){
    pam=0;
    for(j=0;j<3;j++){
        pam=pam+n[i][j];
    }
    printf("the %d row sum is %d\n",i,pam);
}
for(j=0;j<3;j++){
    pam=0;
    for(i=0;i<3;i++){
        pam=pam+n[i][j];
    }
    printf("the %d column sum is %d\n",j,pam);
}
    return 0;
}