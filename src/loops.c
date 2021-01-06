#include<stdio.h>
#include<string.h>
int main(){
	
	char s[6]="Hello";
	char t[6];
	fgets(t, 6, stdin);
	for(int i =0; i<strlen(t);i++){
		printf("%c\t%c", t[i], s[i]);
	} 	
	return 0;
}

