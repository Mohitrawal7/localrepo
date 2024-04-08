#include<stdio.h>
int main() {
int no[50],n,i,j,sum=0,temp;
float avg;
printf("Enter how many number\n");
scanf("%d",&n);
printf("enter %d number\n",n);
for(i=0;i<n;i++)
scanf("%d",&no[i]);
printf("displaying numbers\n");
/*for(i=0;i<n;i++)
printf("%d\t",no[i]);
printf("\n");
for(i=0;i<n;i++)
sum=sum+no[i];
avg=(float)sum/n;
printf("Average is %f",avg);*/
for(i=0;i<n;i++)
printf("%d\t",no[i]);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(no[i]>no[j]){
            temp=no[i];
            no[i]=no[j];
            no[j]=temp;
        }
    }
}
printf("Displaying number after sorting\n");
for(i=0;i<n;i++)
printf("%d\t",no[i]);
    return 0;
}