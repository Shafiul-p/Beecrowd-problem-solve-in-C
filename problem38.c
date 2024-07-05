#include<stdio.h>
int main()
{
    int X,Y;
float a;
scanf("%d%d",&X, &Y);
switch(X)
{
case 1:
     a=Y*4.00;
     break;
case 2:
     a=Y*4.50;
     break;
case 3:
      a=Y*5.00;
      break;
case 4:
     a=Y*2.00;
     break;
case 5:
     a=Y*1.50;}

printf("Total: R$ %.2f\n",a);

    return 0;
}