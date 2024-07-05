//Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.
#include<stdio.h>
int main(){
int a[6];
int i,j=0;
for(i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<6;i++){
    if (a[i]>0){
        j++;
    }
}
printf("%d valores positivos\n",j);


    return 0;
}