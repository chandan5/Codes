#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j, n, b, count;
        SI(tc);
        loop(it, tc)
        {
                SI(n);
                count = 0;
                int a[100010] = {0};
                loop(i,n)
                {
                        SI(b);
                        if(a[b] == 0)
                                count++;
                        a[b] += 1;
                }
                printf("%d\n",count);
        }
        return 0;
}

