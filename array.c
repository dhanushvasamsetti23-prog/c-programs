#include <stdio.h>
intmain()
{
	int a[100],n,i,min,max;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter array value");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i,n;i++)
	{
		if(min>a[i])
		max=a[i];
			
		}
		printf("maximum value=%d"min);
		printf("maximum value=%d"max);
		return 0;
}
