#include<stdio.h>
void main()
{
	int a[100],sum=0,i,n,size;
	printf("enter the size of array = ");
	scanf("%d",&size);
	printf("enter element of array = ");
	for (i=0;i<size;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
		sum=sum+a[i];
		
	}
	printf("sum of array element is %d",sum);
	
}