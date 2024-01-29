#include <stdio.h>

int main () {
    int i ;
    i = 5;
   lame:
    printf("%d\t",i);
    i = i+2;
    if (i<=100){
goto lame;
    }
    return 0 ;
}
 
