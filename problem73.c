//Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.
#include<stdio.h>
#include<math.h>
int main(){
int n,i,e,j=0;
scanf("%d",&n);
int a[n];
for (i=1;i<=n;i++){
    if (i %2 ==0){
        a[j]=i;
        j++;
    }
}
for(i=0;i<j;i++){
    e=pow(a[i],2);
    printf("%d^2 = %d\n",a[i],e);
}



    return 0;
}