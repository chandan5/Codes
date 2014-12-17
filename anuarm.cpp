#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j, n, m, min, maxy;
        SI(tc);
        int a;
        loop(it, tc)
        {
                SI(n);
                SI(m);
                SI(a);
                min = a;
                maxy = a;
                for(i=1;i<m;i++)
                {
                        SI(a);
                        if(a > maxy)
                                maxy = a;
                        if(a < min)
                                min = a;
                }
                loop(i, n-1)
                {
                        printf("%d ",max(i-min, maxy-i));
                }
                printf("%d\n",max(i-min, maxy-i));
        }
        return 0;
}

