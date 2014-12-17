#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int kprime[100010];
int marked[100010];
 
void fillKprimes()
{
        int i, j;
        for(i=2; i<100010; i++)
        {
                if(marked[i] != 1)
                {
                        j = 1;
                        while(i*j < 100010)
                        {
                                kprime[i*j]++;
                                marked[i*j] = 1;
                                j++;
                        }
                        marked[i] = 0;
                }
        }
}
 
int main()
{
        int it, tc, i, j, a, b, k;
        int ans[100010][6];
        SI(tc);
        loop(i, 100000)
        {
                kprime[i] = 0;
                marked[i] = 0;
        }
        fillKprimes();
        ans[1][1] = 0;
        ans[1][2] = 0;
        ans[1][3] = 0;
        ans[1][4] = 0;
        ans[1][5] = 0;
        ans[2][1] = 1;
        ans[2][2] = 0;
        ans[2][3] = 0;
        ans[2][4] = 0;
        ans[2][5] = 0;
        for(i=3; i<100010; i++)
        {
                k = kprime[i];
                for(j=1;j<6;j++)
                {
                        if(j == k)
                                ans[i][j] = ans[i-1][j] + 1;
                        else
                                ans[i][j] = ans[i-1][j];
                }
        }
//      printf("filled\n");
        loop(it, tc)
        {
                SI(a);
                SI(b);
                SI(k);
                int count = 0;
        //      for(i=a; i<=b; i++)
        //      {
        //              getkprime(i);
        //              printf("kprime[%d] = %d\n",i,kprime[i]);
        //              if(kprime[i] == k)
        //                      count++;
        //      }
//              printf("%d %d\n",ans[b][k],ans[a-1][k]);
                count = ans[b][k] - ans[a-1][k];
                printf("%d\n",count);
        }
        return 0;
}

