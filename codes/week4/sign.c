#include <stdio.h>
int sign(int x) {
  int shifted = x>>31;
  return !!x | shifted;
}

int main(){
     int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("SIGN = %d\n",(sign(a)));
}
