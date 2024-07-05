#include <stdio.h>
#include <math.h>
int main()
{ double A,B,C,D,E,R1,R2;
scanf ("%lf%lf%lf",&A,&B,&C);
D=sqrt((B*B)-(4*A*C));
E=4*A*C;
if (D>0 && E!=0)
{
    R1=(-B+D)/(2*A);
R2=(-B-D)/(2*A);
    printf ("R1 = %.5lf\n",R1);
    printf ("R2 = %.5lf\n",R2);
}
else{
    printf("Impossivel calcular\n");
}

    return 0;
}