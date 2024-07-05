//Write a program that reads two scores of a student. Calculate and print the average of these scores. Your program must accept just valid scores [0..10]. Each score must be validated separately.
#include<stdio.h>
int main()
{
    int j=0;
float i,n,a[2],av;
while (j!=2)
{
scanf("%f",&n);
if(n>=0 && n<=10)
{
    a[j]=n;
    if(j==1){
        av=(a[0]+a[1])/2;
        printf("media = %.2f\n",av);
        break;
    }
    j++;
}
else{
    printf("nota invalida\n");
}


}




    return 0;
}