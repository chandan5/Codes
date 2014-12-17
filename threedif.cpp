#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
 
ll d = 1000000007;
 
using namespace std;
 
int main()
{
        ll it, tc, i, j, a, b, c;
        SI(tc);
        ll ans;
        loop(it, tc)
        {
                ans = 1;
                SI(a);
                SI(b);
                SI(c);
                if(a > b)
                        swap(a,b);
                if(a > c)
                        swap(a,c);
                if(b > c)
                        swap(b,c);
                a = a%d;
                b = (b-1)%d;
                c = (c-2)%d;
                ans = (a*b)%d;
                ans = (ans*c)%d;
                printf("%lld\n",ans);
        }
        return 0;
}

