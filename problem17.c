#include<stdio.h>
int main()
{int speed,time,distance;
scanf("%d%d",&speed,&time);
distance=speed*time;
float need=(float)distance/12;
printf("%.3f\n",need);




    return 0;
}