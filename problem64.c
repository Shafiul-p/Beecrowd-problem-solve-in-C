//Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.
#include<stdio.h>
int main(){
float a[6],b=0;
int i,j=0;
for(i=0;i<6;i++){
    scanf("%f",&a[i]);
}
for(i=0;i<6;i++){
    if (a[i]>0){
        j++;
b=(b+a[i]);
    }
}
if(j>0){
printf("%d valores positivos\n%.1f\n",j,b/j);

}


    return 0;
}