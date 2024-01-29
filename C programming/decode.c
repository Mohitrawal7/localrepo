#include<stdio.h>
#include<math.h>

int main ()  {
    int x ;
    printf ("enter number\n");
    scanf("%d",&x);
    if ( x % 2 == 0)
      { printf("x is divisible");}
    else
        printf("not divisile");
    return 0 ;
}