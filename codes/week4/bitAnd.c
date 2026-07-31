#include <stdio.h>
int bitAnd(int x, int y) {
  return ~(~x | ~y);
}
int main(){
    int a,b;
    printf("Enter two numbers by spaces : ");
    scanf("%d %d",&a,&b);
    printf("AND = %d\n",(bitAnd(a,b)));
}