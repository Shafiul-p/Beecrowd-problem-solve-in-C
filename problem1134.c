//A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied (coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. The program will end when the inserted code is the number 4.
#include<stdio.h>
int main(){
int n;
int Alcohol=0, Gasoline =0, Diesel=0;
while(1){
    scanf("%d",&n);
if(n==1){
    Alcohol++;
}
else if(n==2){
    Gasoline++;
}
else if (n==3){
    Diesel++;
}
else if(n==4){

printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",Alcohol, Gasoline , Diesel);
break;}
else{
    continue;
}
}
    return 0;
}