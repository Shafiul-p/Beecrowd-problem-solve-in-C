//Write a program that prints all even numbers between 1 and 100, including them if it is the case.
#include<stdio.h>
int main(){
int i;
for(i=1;i<=100;i++){
    if (i%2==0){
        printf("%d\n",i);
    }
}




    return 0;
}