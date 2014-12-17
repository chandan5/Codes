#include<bits/stdc++.h>
 
#define SI(i) scanf("%d",&i);
#define loop(i,n) for(i=0; i<n; i++)
 
using namespace std;
 
int main()
{
        int it, tc, i, j, a, b, c;
        SI(tc);
        loop(it, tc)
        {
                SI(a);
                SI(b);
                SI(c);
                int maxi=0;
                int maxv=a*100+b;
                i = 0;
                while((a*100+b) >=c)
                {
//                      printf("a:%d b:%d\n",a,b);
                        if(b>=c)
                                b -= c;
                        else
                        {
                                a--;
                                b += 100;
                                b -= c;
                        }
                        swap(a,b);
                        i++;
                        if(maxv < a*100 + b)
                        {
                                maxv = a*100+b;
                                maxi = i;
                        }
                        if(i>=100000)
                                break;
                }
                printf("%d\n",maxi);
        }
        return 0;
}

