#include <stdio.h>

int fib(int n){
	int a=2,b=8;
	int res = 0;	
	while(a<=n){
		res+=a;
		int next = 4*b + a;
		a = b;
		b = next;
	}
	return res;
}

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Output is : %d",fib(n));
}

