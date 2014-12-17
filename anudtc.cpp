#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j, n;
        SI(tc);
        loop(it, tc)
        {
                SI(n);
                if(360%n == 0)
                        printf("y ");
                else
                        printf("n ");
                if(n <= 360)
                        printf("y ");
                else
                        printf("n ");
                if(n <= 26)
                        printf("y ");
                else
                        printf("n ");
                printf("\n");
        }
        return 0;
}

