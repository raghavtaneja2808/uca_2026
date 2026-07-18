#include <stdio.h>

int my_strlen(char *str){
	int len = 0;
	while(*str!='\n'){
		len++;
		str++;
	}
	return len;
}

int main(){
	char str[100];
	printf("Enter the value of string: ");
	fgets(str,sizeof(str),stdin);
	printf("Length of string is: %d",my_strlen(str));
}
