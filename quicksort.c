#include<stdio.h>

int partition(int arr[],int l,int r)
{
	
	int i,j;
	
	int pivot=arr[r];
	
	i=l;
	j=r-1;
	
	int temp;
	while(i<=j)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	
	temp=arr[r];
	arr[r]=arr[i];
	arr[i]=temp;
	
	return i;
}
void quicksort(int arr[],int l,int r)
{
	if(l<r)
	{
		int p=partition(arr,l,r);
		
		quicksort(arr,l,p-1);
		
		quicksort(arr,p+1,r);
	}
}

int main()
{
	int arr[20];
	
	int i,n;
	
	printf("Enter the total  number of elements\n");
	scanf("%d",&n);

	printf("Enter the elements \n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Elements Before QuickSort\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	quicksort(arr,0,n-1);
	
	printf("\nElements After QuickSort\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
