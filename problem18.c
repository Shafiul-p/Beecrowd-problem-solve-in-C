#include<stdio.h>
int main()
{
int N=(0<N<1000000),hundred,fifty,twenty,ten,five,two,one;
scanf("%d",&N);
hundred=N/100;
fifty=(N%100)/50;
twenty=((N%100)%50)/20;
ten=(((N%100)%50)%20)/10;
five=((((N%100)%50)%20)%10)/5;
two=(((((N%100)%50)%20)%10)%5)/2;
one=(((((N%100)%50)%20)%10)%5)%2;
printf("%d\n",N);
printf("%d nota(s) de R$ 100,00\n",hundred);
printf("%d nota(s) de R$ 50,00\n",fifty);
printf("%d nota(s) de R$ 20,00\n",twenty);
printf("%d nota(s) de R$ 10,00\n",ten);
printf("%d nota(s) de R$ 5,00\n",five);
printf("%d nota(s) de R$ 2,00\n",two);
printf("%d nota(s) de R$ 1,00\n",one);


    return 0;
}