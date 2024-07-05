//Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.
#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
for (i=1;i<10000;i++){
    if(i%n==2){
        printf("%d\n",i);
    }
}





    return 0;
}