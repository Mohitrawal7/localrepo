#include <stdio.h>

int main () {

    float P,T,R,I;
    printf ("enter Principal,Time,Rate \n");
   scanf ("%f %f %f",&P , &T,&R);
    I = (P*T*R)/100;
    printf (" The simple interest = %f",I);
    return 0 ;
}