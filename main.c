#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,b,s,g;
    for(x=100;x<1000;x++)
    {
        b=x/100;             /*�ó�����ʮ�١������ϲ�������*/
        s=(x%100)/10;
        g=x%10;
        if(x==b*b*b+s*s*s+g*g*g) //��ס�����Ⱥ�
        {
            printf("%d\n",x);
        }
    }
     getchar();    //���ϲ��ģ��������exe�Ͳ���һ�������ˣ�����
    return 0;
}
