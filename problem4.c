*/Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. 
Print the result like the example below.Do not forget to print the end of line after the result, 
    otherwise you will receive “Presentation Error”.*/

#include<stdio.h>
int main()
{
    int a,b,mul;
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("PROD = %d\n",mul);
    return 0;
}
