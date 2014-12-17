#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j;
        SI(tc);
        int a[10];
        loop(it, tc)
        {
                loop(i, 10)
                        SI(a[i]);
                int ind;
                int min = INT_MAX;
                for(i=1; i<10; i++)
                {
                        if(a[i] < min)
                        {
                                ind = i;
                                min = a[i];
                        }
                }
//              printf("ind->%d\n",ind);
//              printf("min->%d\n",min);
                if(a[0] < min)
                {
                        printf("1");
                        min = a[0]+1;
                        while(min--)
                                printf("0");
 
                }
//              continue;
                else
                {                       min++;
//              printf("\nmin->%d\n",min);
                while(min>=0 && min--)
                {
                        printf("%d",ind);
        //              printf("min->%d",min);
                }
                }
                printf("\n");
        }
        return 0;
}

