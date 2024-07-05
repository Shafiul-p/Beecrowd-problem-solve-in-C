#include <stdio.h>
int main()
{
double p,remain,a,b,c,d,e,f,q;
int N,hundred,fifty,twenty,ten,five,two;
scanf ("%lf",&p);
hundred=N/10000;
fifty=(N%10000)/50;
twenty=((N%100)%50)/20;
ten=(((N%100)%50)%20)/10;
five=((((N%100)%50)%20)%10)/5;
two=(((((N%100)%50)%20)%10)%5)/2;
remain = (((((N%100)%50)%20)%10)%5)%2;
q= remain/100;
a=q/10000;
b=(q%10000)/0.50;
c=((q%10000)%0.50);
printf("%d nota(s) de R$ 100,00\n",hundred);
printf("%d nota(s) de R$ 50,00\n",fifty);
printf("%d nota(s) de R$ 20,00\n",twenty);
printf("%d nota(s) de R$ 10,00\n",ten);
printf("%d nota(s) de R$ 5,00\n",five);
printf("%d nota(s) de R$ 2,00\n",two);



    return 0;
}