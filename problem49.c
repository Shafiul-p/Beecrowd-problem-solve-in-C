#include<stdio.h>
#include<string.h>
int main(){
char a[20],b[20],c[20],d[20],e[20],f[20],g[20];
gets(a);
if(strcmp(a,"vertebrado")==0){
    gets(b);
if(strcmp(b,"ave")==0){
  gets(c);
if(strcmp(c,"carnivoro")==0){
    printf("aguia\n");   
}
else {
    printf("pomba\n");
}
}
else{ 
    gets(d);
    if(strcmp(d,"onivoro")==0){
        printf("homem\n");
    }
    else{
        printf("vaca\n");
    }
}
}


else{
    gets(e);
if(strcmp(e,"inseto")==0){
  gets(f);
if(strcmp(f,"hematofago")==0){
    printf("pulga\n");   
}
else {
    printf("lagarta\n");
}
}
else{ 
    gets(g);
    if(strcmp(g,"hematofago")==0){
        printf("sanguessuga\n");
    }
    else{
        printf("minhoca\n");
    }
}
}





    return 0;
}