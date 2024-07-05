#include <stdio.h>
int main()
{
int code_product1,units_product1,code_product2,units_product2;
float price_per_units_product1,price_per_units_product2,total;
scanf("%d%d%f%d%d%f",&code_product1,&units_product1,&price_per_units_product1,&code_product2,&units_product2,&price_per_units_product2);
total=(units_product1* price_per_units_product1)+(units_product2*price_per_units_product2);
printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;
}