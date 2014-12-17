#include<stdio.h>
#include<stdlib.h>
int main()
{
        int it, tc, n, a[1000], i;
        scanf("%d",&tc);
        for(it=0; it<tc; it++)
        {
                int * b = ( int * ) calloc(10001, sizeof(int));
                scanf("%d",&n);
                for(i=0; i<n; i++)
                {
                        scanf("%d",&a[i]);
                }
                for(i=0; i<n; i++)
                {
                        b[a[i]]++;
                }
                int min_no = 10000000;
                int max_times = 0;
                for(i=0; i<n; i++)
                {
        //              printf("%d -> %d ",a[i],b[a[i]]);
                        if(b[a[i]] > max_times)
                        {
                                max_times = b[a[i]];
                                min_no = a[i];
                        //      printf("max->%d %d\n",min_no,max_times);
                        }
                        else if(b[a[i]] == max_times && min_no > a[i])
                        {
                                max_times = b[a[i]];
                                min_no = a[i];
                        //      printf("max->%d %d\n",min_no,max_times);
                        }
                }
                if(min_no != 0 && max_times != 0)
                        printf("%d %d\n",min_no,max_times);
                free(b);
        }
        return 0;
}
 

