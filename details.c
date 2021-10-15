#include<stdio.h>
#include<string.h>
int main(){
	char* name;
	int pass;
	printf("Enter your name = ");
	scanf("%s",name);
	printf("Password = ");
	scanf("%d",&pass);
	printf("\nName = %s",name);
	printf("\nPassword = %d",pass);
	return 0;
}
