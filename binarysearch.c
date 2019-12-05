#include<stdio.h>
int bins(int ar[],int r,int x)
{
	if (x>=1)
	{
		int mid=r/2;
		
		if(ar[mid]==x)
			return mid;
		
		if(ar[mid]>x)
			return bins(ar,r,x);
			
		if(ar[mid]<x)
			return bins(ar,r,x);
	}
	return -1;
	
}

 int main()
 {
 	int arr[]={7,2,3,4,5,6,7,8,9};
 	int len,res,n;
 	scanf("%d",&n);
 	
 	len=sizeof(arr)/sizeof(arr[0]);
 	
	printf("%d",len);
 	res=bins(arr,len,n);
 	print("%d",res);
 	
 }
