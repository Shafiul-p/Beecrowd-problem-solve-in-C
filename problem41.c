#include<stdio.h>
int main(){

    double x,y;
    scanf("%lf%lf",&x,&y);
   if (y>0){
    if (x>0){
        printf("Q1\n");
    }
    else if(x==0){
        printf("Eixo Y\n");
    }
    else {
        printf("Q2\n");
    }
    }
    else if (y<0){
        if(x<0){
             printf("Q3\n");
        }
        else if (x==0){
            printf("Eixo Y\n");
        }
        else {
            printf("Q4\n");
        }
    }

    else {
        if(x==0){
             printf("Origem\n");
        }
        else {
            printf("Eixo X\n");
        }
    }
   
    return 0;
}