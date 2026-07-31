#include <stdio.h>
int bitXor(int x, int y) {
  return (x& ~y) | (~x & y);
}
int main(){
    int a,b;
    printf("Enter two numbers by spaces : ");
    scanf("%d %d",&a,&b);
    printf("XOR = %d\n",(bitXor(a,b)));
}