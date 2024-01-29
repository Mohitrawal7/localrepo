// C program to print the full pyramid pattern of alphabets
#include <stdio.h>

int main()
{
	int rows;
	printf("Number of rows: ");
	scanf("%d", &rows);

	// first loop to print all rows
	for (int i = 1; i <= rows; i++) {


		// inner loop 2 to print numbers
		for (int k = 1; k <= i; k++) {
			printf("%d", i);
		}
        printf("\n");
	}
    for (int i = (rows-1); i > 0; i--) {
    for(int j=i;j>0;j--){
           printf("%d",i);
    	}
        printf("\n");
    }
	return 0;
}