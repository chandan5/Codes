.1) plaintext list. Status: AC, problem MARCHA2, contest . By chandan5 (chandan5), 2014-12-01 02:14:12.
#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
#define NL printf("\n");
#define SP printf(" ");
#define PI(i) printf("%lld",i); 
 
using namespace std;
 
int main()
{
        ll it, tc, i, j, k, l;
        SI(tc);
        loop(it, tc)
        {
                SI(k);
                ll flag = 0;
                ll nodes = 1;
                SI(l);
                if(l == 0)
                {
                        loop(i, k-1)
                        {
                                SI(l);
                                if(flag == 0)
                                {
                                        if(l > 2*nodes)
                                                flag = 1;
                                        nodes = nodes*2 - l;
                                        if(nodes < 0)
                                                flag = 1;
                                }
                        }
                }
                else if(l == 1)
                {
                        nodes = 0;
                        loop(i, k-1)
                        {
                                SI(l);
                                if(l != 0)
                                        flag = 1;
                        }
                }
                else
                {
                        loop(i, k-1)
                                SI(l);
                        flag = 1;
                }
                if(flag == 0 && nodes == 0)
                        printf("Yes\n");
                else
                        printf("No\n");
        }
        return 0;
}


ubmission Info:


��━━━━━┯━━━━━━━━━┯━━━━━━━━━━┓
��Test │Max(k)   │Result    ┃
��     │         │(time)    ┃
��─────┼─────────┼──────────┨
��1    │6        │accepted  ┃
2s)   ┃
��─────┼─────────┼──────────┨
��2    │1000000  │accepted  ┃
6s)   ┃
��─────┼─────────┼──────────┨
��3    │1000000  │accepted  ┃
3s)   ┃
��─────┼─────────┼──────────┨
��4    │1000000  │accepted  ┃
5s)   ┃
��─────┼─────────┼──────────┨
��5    │1000000  │accepted  ┃
8s)   ┃
��─────┼─────────┼──────────┨
��6    │1000000  │accepted  ┃
0s)   ┃
��━━━━━┷━━━━━━━━━┷━━━━━━━━━━┛
