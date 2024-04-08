#include <stdio.h>

int main () {
    int no ;
    printf("enter no\n");
    scanf ("%d",&no);

     if (no >= 0) {
         printf("positive\n");
      } else 
       {printf("negative\n");}
        if (no % 2 ==0)
         {
             printf("even\n");}
             else{ printf("odd\n");
             }
    return 0 ;

}