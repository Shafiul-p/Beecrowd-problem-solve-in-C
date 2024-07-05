//Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.
#include<stdio.h>
int main(){
int a[5];
int i,n=0,j=0,e=0,o=0;
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++){
    if (a[i]>0){
        j++;
    }
    if (a[i]<0){
        n++;
    }
    if (a[i]%2==0){
        e++;
    }
    if (a[i]%2!=0){
        o++;
    }
}
printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,j,n);


    return 0;
}