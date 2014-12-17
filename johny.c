#include<stdio.h>
 
void qpart(int * a, int k, int n)
{
        int i, temp;
        temp = a[k];
        a[k] = a[n];
        a[n] = temp;
        int count = 1;
        for(i=1;i<n;i++)
        {
                if(a[i] < a[n])
                        count++;
        }
        printf("%d\n",count);
}
 
int main()
{
        int i,tc, n, k, a[110];
        scanf("%d",&tc);
        while(tc--)
        {
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                        scanf("%d",&a[i]);
                scanf("%d",&k);
                qpart(a,k,n);
        }
        return 0;
}

