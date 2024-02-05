#include<stdio.h>
int main() {
//2*3
int marks[2][3];//_ _ _|__
marks[0][0] =90;
marks[0][1] =89;
marks[0][2] =78;

marks[1][0] =97;
marks[1][1] =87;
marks[1][2] =99;

printf("%d\n",marks[0][0]);
printf("%d\n",marks[0][1]);
printf("%d\n",marks[0][2]);
printf("%d\n",marks[1][0]);
printf("%d\n",marks[1][1]);
printf("%d\n",marks[1][2]);
    return 0;
}