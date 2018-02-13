#include<stdio.h>
#include<conio.h>
void main()
{
    int p,q,r=0;
    clrscr ();
    int array [5];
    printf("enter the value:");
    scanf("%d%d",&p,&q);
    printf("enter the number of array:");
    for(int i=0;i<p;i++)
    {
        scanf("%d",&array [i]);
    }
    for(int i=0;i<q;i++)
    {
        r+=array [i];
    }
    printf("sum of integer=%d",r);
    getch ();
}
