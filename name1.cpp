#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
int mark[26];
 
using namespace std;
 
void fill(char * a)
{
        int i=0;
        while(a[i] != '\0')
        {
                mark[a[i] - 'a']++;
                i++;
        }
        return;
}
 
void print()
{
        int i=0;
        while(i<26)
        {
                printf("%c ",i + 'a');
                i++;
        }
        printf("\n");
        i = 0;
        while(i<26)
        {
                printf("%d ",mark[i]);
                i++;
        }
        printf("\n");
        return;
}
 
int main()
{
        int it, tc, i, j, n;
        char a[40100], b[40100];
        SI(tc);
        getchar();
        loop(it, tc)
        {
                loop(i,26)
                {
                        mark[i] = 0;
                }
                scanf("%s",a);
                scanf("%s",b);
                fill(a);
                fill(b);
        //      print();
                SI(n);
                int flag = 0;
                loop(i, n)
                {
                        if(flag == 0)
                        {
                                scanf("%s",a);
                                j=0;
                                while(a[j] != '\0')
                                {
                                        if(--mark[a[j] - 'a'] == -1)
                                        {
                                                flag = 1;
        //                                      cout << a[j] <<endl;
                                                break;
                                        }
                                        j++;
                                }
                        }
                        else
                                scanf("%s",a);
                }
        //      print();
                if(flag == 0)
                        printf("YES\n");
                else
                        printf("NO\n");
        }
        return 0;
}

