#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],temp,n,i,j;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter the array value : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("After sorting...");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
	
