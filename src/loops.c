#include<stdio.h>
#include<string.h>
void fun(){
	printf("l33tf347");
}
int main(){
	
	char s[6]="Hello";
	char t[6];
	fgets(t, 6, stdin);
	for(int i =0; i<strlen(t);i++){
		printf("%c\t%c", t[i], s[i]);
	} 	
	fun();
	return 0;
}

