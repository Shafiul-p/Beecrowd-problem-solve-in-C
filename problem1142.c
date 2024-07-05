//Write a program that reads an integer N. This N is the number of output lines printed by this program.
#include<stdio.h>
int main(){
int i,n,c;
scanf("%d",&n);
c=n*4;
for(i=1;i<=c;i++){
    if (i%4==0){
        printf("PUM\n");
    }
    else{
        printf("%d ",i);
    }
}


    return 0;
}