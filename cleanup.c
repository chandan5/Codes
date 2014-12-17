#include<stdio.h>
int main()
{
        int tc, i, n, m, j;
        scanf("%d",&tc);
        while(tc--)
        {
                int a[1100] = {0};
                scanf("%d%d",&n,&m);
                while(m--)
                {
                        scanf("%d",&i);
                        a[i] = 1;
                }
                j = 0;
                for(i=1;i<=n;i++)
                {
                        if(j == 0 && a[i] == 0)
                        {
                                printf("%d ",i);
                                j=1;
                        }
                        else if(j == 1)
                        {
                                if(a[i] == 0)
                                        j=0;
                                else
                                        j=1;
                        }
                }
                printf("\n");
                j = 0;
                for(i=1;i<=n;i++)
                {
                        if(j == 1 && a[i] == 0)
                        {
                                printf("%d ",i);
                                j=0;
                        }
                        else if(j == 0)
                        {
                                if(a[i] == 0)
                                        j=1;
                                else
                                        j=0;
                        }
                }
                printf("\n");
        }
        return 0;
}

