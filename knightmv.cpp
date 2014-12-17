.1) plaintext list. Status: AC, problem KNIGHTMV, contest . By chandan5 (chandan5), 2014-10-28 15:42:21.
#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        char a[10000];
        int it, tc, i, j;
        SI(tc);
        getchar();
        loop(it, tc)
        {
                gets(a);
                if(strlen(a) == 5 && a[0] <= 'h' && a[0] >= 'a' && a[3]<= 'h' && a[3] >= 'a' && a[2] == '-' && a[1] >= '1' && a[1] <= '8' && a[4] >= '1' && a[4] <= '8')
                {
                        int x = abs(a[0] - a[3]);
                        int y = abs(a[1] - a[4]);
                        if((x == 2 && y == 1) || (x == 1 && y == 2))
                                printf("Yes\n");
                        else
                                printf("No\n");
                }
                else
                        printf("Error\n");
        }
        return 0;
}

