//Read 100 integer numbers. Print the highest read value and the input position.
#include<stdio.h>
int main(){
int a[100],i,j,t,q,p;
for (i=0;i<100;i++){
    scanf("%d",&a[i]);
}
q=a[0];
p=1;
for (i=1;i<100;i++){
    if (a[i]>q){
        q=a[i];
        p=i+1;
    }
}
printf("%d\n%d\n",q,p);
return 0;
}