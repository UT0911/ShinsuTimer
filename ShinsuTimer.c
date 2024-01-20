#include<stdio.h>
int main()
{
    int a3=0;
    int b3=0;
    int c3=0;
    int a4=0;
    int b4=0;
    int c4=0;
    int a6=0;
    int b6=0;
    int c6=0;
    while(1)
    {
        printf("%d%d%d ",a3,b3,c3);
        printf("%d%d%d ",a4,b4,c4);
        printf("%d%d%d\n",a6,b6,c6);
        printf(" \n",a6,b6,c6);
        c3++;
        c4++;
        c6++;
        if(c3==3)
        {
            c3=0;
            b3++;
            if(b3==3)
            {
                b3=0;
                a3++;
                if(a3==3)
                {
                    a3=0;
                }
            }
        }
        if(c4==4)
        {
            c4=0;
            b4++;
            if(b4==4)
            {
                b4=0;
                a4++;
                if(a4==4)
                {
                    a4=0;
                }
            }
        }
        if(c6==6)
        {
            c6=0;
            b6++;
            if(b6==6)
            {
                b6=0;
                if(a6==6)
                {
                    a6=0;
                }
            }
        }
        sleep(1); // 1秒待つ
    }
    return 0;
}
