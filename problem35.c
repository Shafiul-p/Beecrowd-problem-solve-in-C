#include <stdio.h>
int main(){
int A,B,C,D,S,G;
scanf ("%d%d%d%d",&A,&B,&C,&D);
S=C+D;
G=A+B;
if (B>C && D>A && S>G && C>0 && D>0 && A%2==0) 
{
printf ("Valores aceitos\n");}
else {
    printf ("Valores nao aceitos\n");
}

    return 0;
}