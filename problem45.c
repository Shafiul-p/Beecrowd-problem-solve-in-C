#include<stdio.h>
int main(){
double num1,num2,num3;
scanf("%lf%lf%lf",&num1,&num2,&num3);
if (num1>num2 && num1>num3) 
{
    if (num1>=(num2+num3)){

        printf("NAO FORMA TRIANGULO\n");
    }
    else{
    if ((num1*num1)==((num2*num2)+(num3*num3) ))
    {
         printf("TRIANGULO RETANGULO\n");
    }
    if ((num1*num1)>((num2*num2)+(num3*num3) ))
    {
         printf("TRIANGULO OBTUSANGULO\n");
    }
     if ((num1*num1)<((num2*num2)+(num3*num3) ))
    {
         printf("TRIANGULO ACUTANGULO\n");
    }
     if (num1==num2 && num2==num3){
        printf("TRIANGULO EQUILATERO\n");
    }
     if ((num1==num2 && num2!=num3) || (num1==num3 && num3!=num2) || (num2==num3 && num3!=num1)){
        printf("TRIANGULO ISOSCELES\n");
    }}
}
else if (num2>num1 && num2>num3){
    if (num2>=(num1+num3)){

        printf("NAO FORMA TRIANGULO\n");
    }
    else{
     if ((num2*num2)==((num1*num1)+(num3*num3) ))
    {
         printf("TRIANGULO RETANGULO\n");
    }
     if ((num2*num2)>((num1*num1)+(num3*num3)))
    {
         printf("TRIANGULO OBTUSANGULO\n");
    }
     if ((num2*num2)<((num1*num1)+(num3*num3) ))
    {
         printf("TRIANGULO ACUTANGULO\n");
    }
     if (num1==num2 && num2==num3){
        printf("TRIANGULO EQUILATERO\n");
    }
     if ((num1==num2 && num2!=num3) || (num1==num3 && num3!=num2) || (num2==num3 && num3!=num1)){
        printf("TRIANGULO ISOSCELES\n");
    }}
}
else {
    if (num3>=(num2+num1)){

        printf("NAO FORMA TRIANGULO\n");
    }
    else{
     if ((num3*num3)==((num2*num2)+(num1*num1) ))
    {
         printf("TRIANGULO RETANGULO\n");
    }
     if ((num3*num3)>((num2*num2)+(num1*num1) ) )
    {
         printf("TRIANGULO OBTUSANGULO\n");
    }
     if ((num3*num3)<((num2*num2)+(num1*num1) ) )
    {
         printf("TRIANGULO ACUTANGULO\n");
    }
     if (num1==num2 && num2==num3 ){
        printf("TRIANGULO EQUILATERO\n");
    }
     if ((num1==num2 && num2!=num3) || (num1==num3 && num3!=num2) || (num2==num3 && num3!=num1) ){
        printf("TRIANGULO ISOSCELES\n");
    }}
}

return 0;

}