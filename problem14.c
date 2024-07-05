#include<stdio.h>
int main()
{
int distance;
float fuel;
scanf("%d%f",&distance,&fuel);
float average=(float)distance/fuel;
printf("%.3f km/l\n",average);




    return 0;
}