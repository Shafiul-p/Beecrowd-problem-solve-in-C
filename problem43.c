#include<stdio.h>
int main(){
float A,B,C,sum,area;
scanf("%f%f%f",&A,&B,&C);
if (A+B>C && A+C>B && B+C>A){
    sum=A+B+C;
         printf("Perimetro = %.1f\n",sum);
    }
    else {
        area=((A+B)/2)*C;
        printf("Area = %.1f\n",area);

    }
    return 0;
}
