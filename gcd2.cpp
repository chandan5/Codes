#include<bits/stdc++.h>
 
using namespace std;
 
int mod(int a, char * s)
{
        int i, d, m;
        int l = strlen(s);
        m = (s[0]-48);
//      printf("m->%d\n",m);
        for(i=0;i<l;i++)
        {
//              printf("d=%d m=%d\n",d,m);
                d = m%a;
                if(i!=l-1)
                        m = 10*d + s[i+1]-48;
        }
//      printf("%d %d\n",d,m);
        return d;
}
 
int gcd(int a, int b)
{
//      printf("a=%d b=%d\n",a,b);      
        if (b==0)
                return a;
        else
                return gcd(b,a%b);
}
int main()
{
        int tc, a;
        char s[1000];
        scanf("%d",&tc);
        while(tc--)
        {
                scanf("%d%s",&a,s);
                if(a == 0)
                        printf("%s\n",s);
                else
                        printf("%d\n",gcd(a,mod(a,s)));
        }
        return 0;
}

