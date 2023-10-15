#include<stdio.h>
#include<conio.h>
void dis(int [],int);

void main()
{
	int a[100],temp,p,n,i,j;
	clrscr();

	printf("Enter the number=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);


	}
	printf("\n UNSORTED LIST \n");
	dis(a,n);

	 for(i=0;i<n;i++)
	{
		    a[-1]=0;
		     p=i-1;
		     temp=a[i];

		       while(temp<a[p])
			{
				a[p+1]=a[p];
				p--;

			}
		     a[p+1]=temp;
	}
	printf("\n SORTED LIST \n");
	dis(a,n);
	getch();
}
void  dis(int a[],int n)
	{
	int i;
	for(i=0;i<n;i++)
		{
			printf("\n%d ",a[i]);
		}
	 }
