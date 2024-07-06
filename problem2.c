/*The formula to calculate the area of a circumference is defined as A = π . R2.
Considering to this problem that π = 3.14159:
Calculate the area using the formula given in the problem description.*/

#include<stdio.h>
int main(){
    double R,x;// double is a data type
scanf("%lf",&R);// for double datatype we need to take %lf
x=3.14159*R*R;
printf("A=%.4lf\n",x); // getting 4 numbers after dacimal point we need to take .4 and %.4lf
}
