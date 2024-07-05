//time duration
vul acy
#include <stdio.h>

int main() {
    int sh, sm, ss, eh, em, es, sd, ed, dt;
    char a[3],b[3];
    scanf("%s",a);
    scanf("%d", &sd);
    scanf("%d:%d:%d", &sh, &sm, &ss);
     scanf("%s",b);
    scanf("%d", &ed);
    scanf("%d:%d:%d", &eh, &em, &es);

    int ssd = sh * 3600 + sm * 60 + ss;
    int esd = eh * 3600 + em * 60 + es;
    int seconds_in_a_day = 86400;

    if (sd == ed) {
        dt = esd - ssd;
    } else {
        dt = (seconds_in_a_day - ssd) + esd;
        dt += seconds_in_a_day * (ed - sd - 1);
    }
    int d=dt/86400;
    int h=(dt%86400)/3600;
    int m=((dt%86400)%3600)/60;
    int s=((dt%86400)%3600)%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
    return 0;
}
