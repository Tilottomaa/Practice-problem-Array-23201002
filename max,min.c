#include<stdio.h>
int main()
{
	int arr[1000],temp;
	int n,i,j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(arr[j]>arr[i]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}}
	printf("Maximum number is %d.\n",arr[0]);
	printf("Minimum number is %d.\n",arr[n-1]);
return 0;
}

