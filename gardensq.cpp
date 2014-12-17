#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j, m, k, n;
        char arr[50][50];
        SI(tc);
        loop(it, tc)
        {
                SI(n);
                SI(m);
                getchar();
                int count=0;
                loop(i, n)
                {       loop(j, m)
                        {
                                scanf("%c",&arr[i][j]);
                        }
                        getchar();
                }
                loop(i, n)
                {
                        loop(j, m)
                        {
                                k = min(n-i, m-j)-1;
                        //      printf("i: %d j: %d k: %d\n", i, j, k);
                                for(;k>=1;k--)
                                {
                                        if(arr[i][j] == arr[i+k][j] && arr[i][j] == arr[i][j+k] &&arr[i][j] == arr[i+k][j+k])
                                                count++;
                                }
                        }
                }
                printf("%d\n",count);

        }
        return 0;
}

