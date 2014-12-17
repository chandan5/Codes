#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i)
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
 
int main()
{
        int it, tc, i, j, n, t;
        int a[100000];
        SI(tc);
        while(tc--)
        {
                SI(n);
                for(j=0;j<n;j++)
                        SI(a[j]);
                sort(a,a + n);
                if(n > 2)
                {
                        for(i=1;i<n-1;i+=2)
                        {
                                t = a[i];
                                a[i] = a[i+1];
                                a[i+1] = t;
                        }
                }
                for(j=0;j<n;j++)
                        printf("%d ",a[j]);
                printf("\n");
        }
        return 0;
}

