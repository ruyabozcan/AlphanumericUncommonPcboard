#include <stdio.h>
int main(void) {
 int num,rev=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  int tmp=num;
  while(num>0){
    int b=num%10;
    rev=rev*10+b;
    num/=10;
  }
  printf("Reverse number is %d",rev);
  if(rev==tmp)
     printf("\nthe input number is symaytric");
  return 0;
}
