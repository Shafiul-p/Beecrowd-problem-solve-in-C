#include<stdio.h>
int main()
{
int i,j,c=7,d;
for(i=1;i<=9;i=i+2){
      d=c-2;
    for(j=c;j>=d;j--){
printf("I=%d J=%d\n",i,j);
    }
    c=d+4;
  
}




    return 0 ;
}