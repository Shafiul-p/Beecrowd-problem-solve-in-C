#include<stdio.h>
int main(){
float salery,new_salery,persentage;
int ratio;
scanf("%f",&salery);
if (salery>=0 && salery<=400){
new_salery=salery+((salery*(float)15)/100);
ratio=15;
persentage=new_salery-salery;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.d %%\n",new_salery,persentage,ratio);

}
else if (salery>=400.01 && salery<=800)
{
new_salery=salery+((salery*(float)12)/100);
ratio=12;
persentage=new_salery-salery;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",new_salery,persentage,ratio);
}
else if (salery>=800.01 && salery<=1200)
{
    new_salery=salery+((salery*(float)10)/100);
ratio=10;
persentage=new_salery-salery;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",new_salery,persentage,ratio);
}
else if (salery>=1200.01 && salery<=2000)
{
   new_salery=salery+((salery*(float)7)/100);
ratio=7;
persentage=new_salery-salery;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",new_salery,persentage,ratio);
}
else{
    if (salery>200)
    {
      new_salery=salery+((salery*(float)4)/100);
ratio=4;
persentage=new_salery-salery;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",new_salery,persentage,ratio); 
    }
    
}

    return 0;
}
