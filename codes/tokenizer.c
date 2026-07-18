#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "C,C++,Java,Python,Rust";
	char *ptr = strtok(str,",");
	while(ptr!=NULL){
		printf("%s\n",ptr);
		ptr = strtok(NULL,",");
	}
}
