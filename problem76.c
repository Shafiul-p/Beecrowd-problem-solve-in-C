//Read an integer N (2 < N < 1000). Print the multiplication table of N. 1 x N = N      2 x N = 2N        ...       10 x N = 10N  
#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
for(i=1;i<=10;i++){
    printf("%d x %d = %d\n",i,n,i*n);
}




    return 0;
}