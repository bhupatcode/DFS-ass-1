#include<stdio.h>
#include<conio.h>

///void dis(int[],int);
	int partation(int [],int,int);
	void q_sort(int [],int,int);
	void swap(int *,int *);
void main()
{

	int i,a[500],n,low,high;
	clrscr();

	printf("n=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	low=0;
	high=n-1;
       partation(a,low,high);
	q_sort(a,low,high);
	printf("SORTED");
	for(i=0;i<n;i++)
	{
		printf(" \n %d",a[i]);
	}
	getch();
}

int partation(int a[],int low,int high)
{
	int i,j=0,pivot,temp;

	pivot=a[high];
	i=low-1;

	for(j=0;j<=high-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);

		}
	}
	swap(&a[i+1], &a[high]);
	return i+1;
}

void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
void q_sort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partation(a,low,high);
		q_sort(a,low,pi-1);
		q_sort(a,pi+1,high);
	}

}
