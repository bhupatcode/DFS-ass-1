#include<stdio.h>
#include<conio.h>

void a_sort();
void b_sort();
void dis();
void merge();
void result();

int a[100],b[100],c[100],i,j,k,m,n,temp,gap,s=0,p;

void main()
{
	clrscr();
	printf("Enter the number of A_arry=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);

	}
	printf("Enter the number of B_arry=");
	scanf("%d",&m);

	for(j=0;j<m;j++)
	{
		printf("b[%d]=",j);
		scanf("%d",&b[j]);
	}


	a_sort();
	b_sort();
	dis();
	merge();
	result();
	getch();


}

void a_sort()
{


	for(i=0;i<n;i++)
	{
		     p=i-1;
		     temp=a[i];

		       while(temp<a[p])
			{
				a[p+1]=a[p];
				p--;

			}
		     a[p+1]=temp;
	}

}
void b_sort()
{

	for(j=0;j<m;j++)
	{
		     p=j-1;
		     temp=b[j];

			while(temp<b[p])
			{
				b[p+1]=b[p];
				p--;

			}
		     b[p+1]=temp;
	}

}
void dis()
{
	printf(" \n A sorted\n ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}

	printf("\n B sorted");
	for(j=0;j<m;j++)
	{
		printf("\n %d",b[j]);
	}
}
void merge()
{

	i=0;
	j=0;
	k=0;
	while(i<n && j<m)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
			k++;
		}
		else if(a[i]<b[j])
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
			c[k]=a[i];
			i++;
			k++;
		}
	}
		while(i<n)
		{
			c[k]=a[i];
			i++;
			k++;

		}
		while(j<m)
		{
			c[k]=b[j];
			j++;
			k++;
		}
}
void result()
{
	printf("\n after merge arry \n ");
	for(i=0;i<k;i++)
	{
		printf("\n%d",c[i]);
	}
}