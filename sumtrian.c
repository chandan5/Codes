#include<stdio.h>
int a[102][102], n;
int main()
{
        int tc,i, j;
        scanf("%d",&tc);
        while(tc--)
        {
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                        for (j = 1; j <= i; j++)
                                scanf("%d",&a[i][j]);
 
                for (i = n-1; i > 0; i--)
                {
                        for(j=1; j<= i; j++)
                        {
                                a[i][j] += (a[i+1][j] > a[i+1][j+1]) ? a[i+1][j] : a[i+1][j+1];
                        }
                }
                printf("%d\n",a[1][1]);
        }
        return 0;
}
