#include <stdio.h>

int main() {
    float i;
    int a = 0,e,f,t,k=1;
    float b,j,c,h=3;

    for (i = 0; i <=2.2; i += 0.2) {
        for (j = k; j <=h; j++) {
            a++;
            t=1;
            if (a > 3 && i<2 && j<5 &&i!=1 ) {
                c= j + i;
                t++;
                printf("I=%.1f J=%.1f\n", i, c);
                while(t>3){
                    k=j-2;
                    h=j;
                }
            } 
            else{
                e=i;
                f=i+j;
                printf("I=%d J=%d\n", e, f);
            }
        }
    }

    return 0;
}
