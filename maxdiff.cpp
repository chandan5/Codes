.1) plaintext list. Status: AC, problem MAXDIFF, contest . By chandan5 (chandan5), 2014-10-24 02:07:41.
#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i)
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
        ll it, tc, i, j, k, n;
        ll sum_k=0, sum_n=0;
        SI(tc);
        ll a[110000];
        loop(it, tc)
        {
                sum_n = 0;
                sum_k = 0;
                SI(n);
                SI(k);
                if(k>n/2)
                        k=n-k;
                loop(i,n)
                {
                        SI(a[i]);
                        sum_n += a[i];
                }
                sort(a,a+n);
                loop(i,k)
                        sum_k += a[i];
                printf("%lld\n",abs(sum_n-2*sum_k));
        }
        return 0;
}

