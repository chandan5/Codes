#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
using namespace std;
 
int main()
{
        ll it, tc, i, j, n, a, b;
        SI(tc);
        loop(it, tc)
        {
                SI(n);
                loop(i,n)
                        SI(j);
                if(n%2 == 0)
                {
                        a = n/2;
                        b = n-1;
                }
                else
                {
                        a = n;
                        b = (n-1)/2;
                }
                printf("%lld\n",a*b);
        }
        return 0;
}

