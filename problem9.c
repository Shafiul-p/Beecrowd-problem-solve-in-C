#include<stdio.h>
int main()
{
char name;
double salary,value,total;
scanf("%s%lf%lf",&name,&salary,&value);
total=salary+(value*0.15);
printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}