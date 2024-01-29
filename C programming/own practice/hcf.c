#include <stdio.h>

int main() {
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <n; j++) {
			printf(" ");
		}
		for (int k = 1; k <=i; k++) {
				printf("* ");
		}
		printf("\n");
	}
    for(int l=1;l<=n-1;l++){
    for(int g=l;g>0;g--){
        printf(" ");
    }
    for(int p=n-1;p>=l;p--){
        printf("* ");
      }
      printf("\n");}
	return 0;
}
