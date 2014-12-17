#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i)
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
        ll it, tc, i, j, n, k, t, s;
        SI(tc);
        loop(it, tc)
        {
                s=0;
                t=0;
                SI(n);  //total candies
                SI(k);  //students
                if(k > n || k==0)
                {
                        t = n;
                        s = 0;
                }
                else
                {
                        t = n%k;
                        s = n/k;
                }
                printf("%lld %lld\n",s,t);
        }
        return 0;
}

