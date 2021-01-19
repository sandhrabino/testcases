#include<stdio.h>

int main(){

	int n;
	printf("Enter a number from 1-5:\t");
	scanf("%d", &n);
	switch(n){
		case 1: 
			printf("%d", n+n);
			break;
		case 2:
			printf("%d", n-n);
			break;
		case 3:
			printf("%d", n*n);
			break;
		case 4:
			printf("%d", n/n);
			break;
		case 5:
			printf("%d", n);
			break;
		default: 
			break;
	}
	return 0;
}
