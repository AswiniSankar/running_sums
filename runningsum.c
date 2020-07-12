/*
ip:
5
1
2
3
4
5
op:
[1,3,6,10,15]
*/
#include<stdio.h>
int main()
{
   int n,a[30],i,sum=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    { scanf("%d",&a[i]);
   }
    printf("[");
    for(i=0;i<n-1;i++)
    {
      sum+=a[i];
      printf("%d,",sum);
   }
  printf("%d]\n",a[n-1]+sum);
  return 0;
}
