#include <stdio.h>

int fib(int n){
	int res = 0;
	int a=0,b=1;
	while(b<=n){
		if(b%2==0)res+=b;
		int temp = a;
		a = b;
		b+=temp;
	}
	return res;

}
int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Output is : %d",fib(n));
}

