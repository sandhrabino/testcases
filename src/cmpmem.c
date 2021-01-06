#include<stdio.h>
#include<string.h>
int main(){
	
	char s[6]="Hello";
	char t[6];
	long unsigned int n=5;
	fgets(t, 6, stdin);
	int ret = memcmp(s, t, n);
	if(ret == 0){
		printf("\nThe given strings are the same.\n");
	}
	else{
		printf("\nThe given strings are not the same.\n");
	}
	
}

