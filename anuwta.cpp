#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
        ll it, tc, i, j, n;
        SI(tc);
        loop(it, tc)
        {
                SI(n);
                ll result = (n*(n+3))/2;
                printf("%lld\n",result);
        }
        return 0;
}

