#include <stdio.h>
#include <string.h>

void reverse_string(char *str){
	int L=0,R=strlen(str)-2;
	while(L<R){
		char temp = str[L];
		str[L] = str[R];
		str[R] = temp;
		L++;R--;
	}
}

int main(){
	char str[100];
	printf("Enter the value of string: ");
	fgets(str,sizeof(str),stdin);
	reverse_string(str);
	printf("Reversed String is : %s",str);
}
