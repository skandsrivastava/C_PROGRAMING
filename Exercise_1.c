/*WAP in which take 2-no from user and swap it.*/
#include<stdio.h>
void main ();
{
    int a ,b, c ;
    printf("ENTER THE first value\n");
    scanf("%d", &a);
    printf("ENTER THE second value\n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=a;
    printf("%d\n"a);
    printf("%d\n"b);
}