#include<stdio.h>
int main()
{
	int a[]={-1,2,5,7,9};
	int b[]={0,5,7,20,30,40};
	int c[20];
	int i,j,k;
	void merge(int a[],int,int b[],int,int c[]);
	printf("\n first array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n second array:\n");
	for(i=0;i<6;i++)
	{
		printf("%d\n",b[i]);
	}
	merge(a,5,b,6,c);
	printf("array after merging:\n");
	for(i=0;i<(5+6);i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
}
void merge(int a[],int m,int b[],int n,int c[])
{
	int i=0,j=0,k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		j++;
		k++;
	}
}