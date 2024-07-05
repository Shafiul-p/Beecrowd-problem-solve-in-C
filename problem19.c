#include <stdio.h>
int main()
{
int N,hours,munites,seconds;
scanf("%d",&N);
hours=N/3600;
munites=(N%3600)/60;
seconds=(N%3600)%60;
printf("%d:%d:%d\n",hours,munites,seconds);



    return 0;
}