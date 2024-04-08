#include<stdio.h>
#include<string.h>
struct address {
    int houseno;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);
int main() {
/*struct address a1={13,5,"Alaska","new york"};
 printf("%d\n",a1.houseno);
struct address a2={29,3,"Hampston","New Jersey"};
struct address a3={90,23,"Ston","Jersey"};
struct address a4={9,9,"Hamp","Newe"};
struct address a5={2,30,"Ampsto","Ewjers"};
printf("%s\n",a1.city);
printf("%d\n",a4.block);
printf("%s\n",a2.state);
printf("%d\n",a3.houseno);*/
struct address adds[50];
//input
printf("enter info for person 1 :");
scanf("%d",&adds[0].houseno);
scanf("%d",&adds[0].block);
scanf("%s",adds[0].city);
scanf("%s",adds[0].state);

printf("enter info for person 2 :");
scanf("%d",&adds[1].houseno);
scanf("%d",&adds[1].block);
scanf("%s",adds[1].city);
scanf("%s",adds[1].state);

printf("enter info for person 3 :");
scanf("%d",&adds[2].houseno);
scanf("%d",&adds[2].block);
scanf("%s",adds[2].city);
scanf("%s",adds[2].state);

printf("enter info for person 4 :");
scanf("%d",&adds[3].houseno);
scanf("%d",&adds[3].block);
scanf("%s",adds[3].city);
scanf("%s",adds[3].state);

printf("enter info for person 5 :");
scanf("%d",&adds[4].houseno);
scanf("%d",&adds[4].block);
scanf("%s",adds[4].city);
scanf("%s",adds[4].state);

printAdd(adds[0]);
printf("\n");
printAdd(adds[1]);
printf("\n");
printAdd(adds[2]);
printf("\n");
printAdd(adds[3]);
printf("\n");
printAdd(adds[4]);

    return 0;
}

void printAdd (struct address add) {
    printf("address is :%d,%d,%s,%s",add.houseno,add.block,add.city,add.state);
}