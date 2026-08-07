#include <stdio.h>
int logicalShift(int x, int n) {
  int rightArth = x>>n;
  int mask = ((1<<31)>>n)<<1;
  return ~mask & rightArth;
}
int main(){
    // int x,n;
    // printf("Enter the number: ");
    // scanf("%d",&x);
    // printf("How much shift : ");
    // scanf("%d",&n); 
    // printf("Right shifted logical value is : %d\n",logicalShift(x,n));
    printf("0x%08X\n", logicalShift(0x87654321,4) );
}