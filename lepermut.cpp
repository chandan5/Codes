.1) plaintext list. Status: AC, problem LEPERMUT, contest . By chandan5 (chandan5), 2014-10-02 19:54:48.
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int tc, n, i, j, a[105], linv, inv;
        scanf("%d",&tc);
        while(tc--)
        {
                scanf("%d",&n);
                for(i=0;i<n;i++)
                        scanf("%d",&a[i]);
                inv = 0;
                linv = 0;
                for(i=0;i<n;i++)
                {
                        for(j=i+1;j<n;j++)
                        {
                                if(a[i] > a[j])
                                {
                                        if(j == i+1)
                                                linv++;
                                        inv++;

                                }
                        }
                }
                if(linv == inv)
                        printf("YES\n");
                else
                        printf("NO\n");
        }
        return 0;
}

