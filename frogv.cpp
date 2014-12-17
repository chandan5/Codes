#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
#define f first 
#define s second
 
using namespace std;
 
bool comp(pair <ll, ll> i, pair<ll, ll> j)
{
        return i.s < j.s;
}
 
int main()
{
        ll it, tc, i, j, n, p, k;
        pair <ll, ll> a[100010];
        ll orig[100010];
        ll ans[100010];
        SI(n);
        SI(k);
        SI(tc);
        loop(i, n)
        {
                SI(a[i].s);
                a[i].f = i;
        }
        sort(a,a+n,comp);
        ll prev = 0;
        ans[0] = 0;
        for(i=0; i<n; i++)
        {
                ans[i] = ans[i-1] + ((a[i].s-a[i-1].s>k) ? 1: 0);
//              printf("%lld: %lld: %lld\n",a[i].f,a[i].s,ans[i]);
        }
        loop(i, n)
        {
                orig[a[i].f] = ans[i];
//              printf("%lld: %lld\n",i,ans[i]);
        }
//      loop(i, n)
//              printf("%lld: %lld\n",i,orig[i]);
        loop(it, tc)
        {
                SI(i);
                i = i-1;
                SI(j);
                j = j-1;
                if(orig[i] == orig[j])
                        printf("Yes\n");
                else
                        printf("No\n");
        }
        return 0;
}

