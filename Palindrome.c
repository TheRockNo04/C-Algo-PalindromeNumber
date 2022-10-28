#include<stdio.h>
int main(){
 int a,b,stop,sum=0;
  printf("enter the number:- ");
  scanf("%d",&stop);

b=stop;

while(b>0){
 a=b%10;
 sum=(sum*10)+a;
 b/=10;}

 printf("\n");
 printf("%d ",sum);

 if(sum==stop){printf("Is Palindrome");}

 else{printf("Not Palindrome");}

return 0;
}
