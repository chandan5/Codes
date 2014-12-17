#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j;
        char a[1000];
        SI(tc);
        getchar();
        loop(it, tc)
        {
                int arr[26] = {0};
                int space = 0;
                gets(a);
                i=0;
                while(a[i]!='\0')
                {
                        if(a[i] >= 'a' && a[i] <= 'z')
                                arr[a[i]-'a'] = 1;
                        else if(a[i] >= 'A' && a[i] <= 'Z')
                                arr[a[i]-'A'] = 1;
                        else if(a[i] == ' ')
                                space = 1;
                        i++;
                }
                int flag = 0;
                loop(i, 26)
                {
                        if(arr[i] == 0)
                        {
                                printf("%c",'a'+i);
                                flag = 1;
                                break;
                        }
                }
                if(flag == 0)
                {
        //              if(space == 0)
        //                      printf(" ");
        //              else
                                printf("~");
                }
                printf("\n");

        }
        return 0;
}

