//Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case
#include<stdio.h>
int main(){
int x,i,j=0;
scanf("%d",&x);
for(i=x;j!=6;i++){
    if (i%2!=0){
        printf("%d\n",i);
        j++;
    }
}





    return 0;
}