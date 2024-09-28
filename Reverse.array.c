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
	printf("Input Array : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
printf("Reverse Array : ");
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}


