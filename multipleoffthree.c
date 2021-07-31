#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int t,i,n;	
	scanf("%d",&t);
	long long int k;
	int d0,d1;
	long long int sum=0;
	for(i=1;i<=t;i++)
	{
		scanf("%lld %d %d",&k,&d0,&d1);
		sum=d0+d1;
		int j;
		int sum2=0;		
		for(j=3;j<=k && j<=9;j++)
		{
			if(j>=6)
			{
				sum2+=sum%10;
			}		
			sum+=(sum%10);
		}
		int x;		
		if(j<=k)
	    {
	    	sum+=((k-j+1)/4)*sum2;
	    	for(x=1;x<=(k-j+1)%4;x++)
			{
				sum+=sum%10;
			}
		}
		
		if(sum%3==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
}
