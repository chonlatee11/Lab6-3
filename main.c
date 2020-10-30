#include <stdio.h>
int main(void) { 
int n, i, count = 0;
while(1){
printf("Enter number :");
scanf("%d",&n);
if(n<0){
  break;
} 
for(i=2; i<=n/2; ++i){
if(n%i==0)
{
count=1;
break;
}
}
if (count==0)
for(i=1;i<=12;i++){
printf("%d X %d = %d\n",n,i,n*i);
}
else
printf("Not prime number !!!");
count=0;
}
}