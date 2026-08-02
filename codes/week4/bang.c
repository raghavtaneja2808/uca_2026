#include <stdio.h>

int bang(int x) {
  return ((x | -x) >> 31) +1;
}
int main(){
     int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("BANG = %d\n",(bang(a)));
}