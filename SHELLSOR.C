#include<stdio.h>
#include<conio.h>
void dis(int [],int);

void main()
{
	int a[100],temp,n,s,i,gap;
	clrscr();

	printf("Enter the number of element=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n UNSORTED LIST \n");
		   dis(a,n);
			gap=n/2;
				do
				{
					do
					{
						s=0;
							for(i=0;i<n-gap;i++)
							{
								if(a[i]>a[i+gap])
								{
									temp=a[i];
									a[i]=a[i+gap];
									a[i+gap]=temp;
									s=1;
								}
							}

					}
					while(s);
				}
				while(gap=gap/2);
		}
	 }

	printf("\n sorted list");
	dis(a,n);
	getch();
}

void dis(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}