#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,b,s,g;
    for(x=100;x<1000;x++)
    {
        b=x/100;             /*得出“个十百”是网上查阅资料*/
        s=(x%100)/10;
        g=x%10;
        if(x==b*b*b+s*s*s+g*g*g) //记住两个等号
        {
            printf("%d\n",x);
        }
    }
     getchar();    //网上查阅，有这个打开exe就不会一闪而过了，哈哈
    return 0;
}
