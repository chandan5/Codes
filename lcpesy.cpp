#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
using namespace std;
 
int main()
{
        ll it, tc, i, j;
        SI(tc);
        char a[100010],b[100010];
        loop(it, tc)
        {
                ll arr1[255] = {0};
                ll arr2[255] = {0};
                scanf("%s",a);
                scanf("%s",b);
                ll lena = strlen(a);
                ll lenb= strlen(b);
                loop(i,lena)
                {
                        arr1[a[i]]++;
                }
                loop(i,lenb)
                {
                        arr2[b[i]]++;
                }
                ll max = 0;
                loop(i,255)
                {
//                      if(arr1[i] != 0 || arr2[i] !=0)
//                      {
//                      cout << arr1[i];
//                      cout << " " << i << " ";
//                      cout << arr2[i] << endl;
//                      }
                        max += min(arr1[i], arr2[i]);
                }
                printf("%lld\n",max);
        }
        return 0;
}

