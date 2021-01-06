#include<stdio.h>
#include<string.h>
int main(){
	char hello[50];
	fgets(hello, 50, stdin);
	for (int i=0;i<strlen(hello);i++){
		printf("%d\t%c\n",i, hello[i]^0x5);
	}
	printf("%d", strcmp(hello, "hello"));
	return 0;

}
