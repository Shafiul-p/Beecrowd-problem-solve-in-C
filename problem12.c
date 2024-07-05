#include<stdio.h>
int main()
{
float area1,area2,area3,area4,area5;
double A,B,C;
scanf("%lf %lf %lf",&A,&B,&C);
area1= (float)1/2*A*C;
area2= 3.14159*C*C;
area3= (A+B)*C/2;
area4= B*B;
area5= A*B;
printf("TRIANGULO: %.3f\n",area1);
printf("CIRCULO: %.3f\n",area2);
printf("TRAPEZIO: %.3f\n",area3);
printf("QUADRADO: %.3f\n",area4);
printf("RETANGULO: %.3f\n",area5);
return 0;
}