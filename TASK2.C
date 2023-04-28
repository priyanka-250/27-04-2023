#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("enter value a=");
    scanf("%d",&a);
    printf("enter value b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("value of a=%d",a);
    printf("\nvalue of b=%d",b);
    getch();

}