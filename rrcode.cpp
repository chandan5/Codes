#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j, temp, n, a[1010], k, ans;
        char op[5];
        SI(tc);
        loop(it, tc)
        {
                SI(n);
                SI(k);
                SI(ans);
                loop(i,n)
                {
                        SI(a[i]);
                }
                scanf("%s",op);
                if(strcmp(op, "XOR") == 0)
                {
                        temp = ans;
                        if(k%2 == 1)
                        {
                                for(j=0;j<n;j++)
                                {
                                        temp ^= a[j];
                                }
                                ans = temp;
                        }
                }
                else if(strcmp(op, "AND") == 0)
                {
                        if(k!=0)
                        {
                        temp = ans;
                        for(j=0;j<n;j++)
                        {
                                temp &= a[j];
                        }
                        ans = temp;
                        }
                }
                else if(strcmp(op, "OR") == 0)
                {
                        if(k!=0)
                        {
                        temp = ans;
                        for(j=1;j<n;j++)
                        {
                                temp |= a[j];
                        }
                        ans = temp;
                        }
                }
                printf("%d\n",ans);
        }
        return 0;
}

