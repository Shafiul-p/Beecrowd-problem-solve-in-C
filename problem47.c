#include<stdio.h>
#include <stdlib.h>
int main(){
int start,start_m,end,end_m,duration_h,duration_m,first_m,final_m,minute;
scanf("%d%d%d%d",&start,&start_m,&end,&end_m);

first_m=start*60+start_m;
final_m=end*60+end_m;
if (final_m<=first_m){
    if(start=end){
        duration_h=(24-start)+end;
        minute=abs(start_m-end_m);
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration_h,minute);
}
else{
duration_m=abs(1400-first_m)+final_m;
duration_h=duration_m/60;
minute=duration_m%60;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration_h,minute);}}
 
else{
    duration_m=final_m-first_m;
    duration_h=duration_m/60;
    minute=duration_m%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duration_h,minute);}


return 0;
}>