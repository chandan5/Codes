#include<stdio.h>
int main()
{
        int x;
        float bal;
        scanf("%d%f",&x,&bal);
        if(x%5 != 0)
                printf("%.2f\n",bal);
        else if(x + 0.5 > bal)
                printf("%.2f\n",bal);
        else
                printf("%.2f\n",bal-x-0.5);
        return 0;
}

