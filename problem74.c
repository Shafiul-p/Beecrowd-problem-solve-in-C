//Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int p[n],ne,e,o;
for(o=0;o<n;o++){
    scanf("%d",&p[o]);
}
for(o=0;o<n;o++){
if (p[o]>0){
    if(p[o]%2==0){
        printf("EVEN POSITIVE\n");
    }
    else{
        printf("ODD POSITIVE\n");
    }
}
else if (p[o]==0){
    printf("NULL\n");
}
else{
    if(p[o]%2==0){
        printf("EVEN NEGATIVE\n");
    }
    else{
        printf("ODD NEGATIVE\n");
    }
}
}
    return 0;
}