#include<stdio.h>
int maxm(int arr[],int len)
{
	int i,max=arr[0];
	for(i=1;i<len;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}	
	}
	return max;
}
int minm(int arr[],int len)
{
	int i,min=arr[0];
	for(i=1;i<len;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}	
	}
	return min;
}
int searchno(int arr[],int len,int search)
{
	int count=0,i;
	for(i=0;i<len;i++)
		if(search==arr[i])
			{
				count++;
			}
	return count;
}

void sorting(int arr[],int len)
{
	int i,j,temp;
	for(i=0;i<len;i++)
	{
		for(j=0;j<=len;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}		
	}
}
main()
{
	int i,len,a[100],ch,search,j,temp,count=0,ans;
	printf("Enter the size of array");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		printf("Enter %d number : ",(i+1));
		scanf("%d",&a[i]);
	}
	printf("You entered following array :");
	for(i=0;i<len;i++)
	{
		printf(" %d ",a[i]);
	}
	do
	{
		printf("\n***What operation do you want perform***\n");
		printf(" 1. Find maximum number\n 2. Find minimum number\n 3. Search a number\n");
		printf(" 4. Sorting of array\n 5. Exit\n");
		scanf("\n%d",&ch);
		
		switch (ch)
		{
			case 1: 
					ans=maxm(a,len);
					printf("Maximum number is %d\n",ans);
					break;
			case 2: ans=minm(a,len);
					printf("Minimum number is %d\n",ans);
					break;
			case 3: printf("Enter a number for searching !!\n");
					scanf("%d",&search);
					ans=searchno(a,len,search);
					if(ans==1)
					printf("Number found");
					else
					{
					printf("Number not found");
					}
					break;
			case 4: printf("The list is before sorting\n");
					for(i=0;i<len;i++)
					printf("\n%3d",a[i]);
					sorting(a,len);
					printf("The list is after sorting\n");
					for(i=0;i<len;i++)
					printf("\n%3d",a[i]);
					break;
			case 5: printf("\nExited");
					break;
					default:printf("\nInvalid choice");
		}
	}
	while(ch!=5);
}