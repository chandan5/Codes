#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
 
using namespace std;
 
ll a[300][300]; //graph
ll d[300][300]; //shortest dist
void print(ll n)
{
        int i, j;
        loop(i, n)
        {
                loop(j, n)
                {
                        printf("%lld ",d[i][j]);
                }
                printf("\n");
        }
                printf("\n");
        return;
}
 
int main()
{
        ll it, tc, i, j, k, n, s, g, de;
        SI(n);
        loop(i, n)
        {
                loop(j, n)
                {
                        SI(a[i][j]);
                        d[i][j] = a[i][j];
                }
        }
        for(k=0; k<n; k++)
        {
                for(i=0; i<n; i++)
                {
                        for(j=0; j<n; j++)
                        {
                                if(d[i][k]+d[k][j] < d[i][j])
                                        d[i][j] = d[i][k] + d[k][j];
                        }
                }
//              print(n);
        }
        SI(tc);
        loop(it, tc)
        {
                SI(s);
                SI(g);
                SI(de);
                printf("%lld %lld\n",d[s][g]+d[g][de], d[s][g]+d[g][de] - d[s][de]);
        }
        return 0;
}

