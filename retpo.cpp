#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
        ll it, tc, i, j;
        SI(tc);
        loop(it, tc)
        {
                SI(i);
                SI(j);
                i = abs(i);
                j = abs(j);
//              if(i > j)
//                      swap(i,j);
                if(i == j)
                        printf("%lld\n",2*i);
                else if(i > j)
                {
                //      if(i%2 != 0) // i odd
                        if((j%2 != 0 && i%2 != 0) || (j%2 == 0 && i%2 == 0))
                                printf("%lld\n",2*i);
                        else
                                printf("%lld\n",2*i+1);
                }
                else
                {
                        if((j%2 != 0 && i%2 != 0) || (j%2 == 0 && i%2 == 0))
                                printf("%lld\n",2*j);
                        else
                                printf("%lld\n",2*j-1);
                }
        }
        return 0;
}

