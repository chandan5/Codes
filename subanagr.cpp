#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j;
        int str[110][26] = {0};
        char a[110];
        SI(tc);
        loop(it, tc)
        {
                scanf("%s",a);
                for(i=0;a[i]!='\0';i++)
                {
                        str[it][a[i]-'a']++;
                }
 
        }
        int min;
        int ind=0;
        loop(i,26)
        {
                min = str[0][i];
                loop(j,tc)
                {
                        if(str[j][i] < min)
                                min = str[j][i];
                }
                loop(j,min)
                {
                        a[ind++] = i + 'a';
                }
        }
        a[ind] = '\0';
        if(ind == 0)
                printf("no such string\n");
        else
                printf("%s\n",a);
        return 0;
}

