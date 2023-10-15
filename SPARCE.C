#include<stdio.h>
#include<conio.h>

  void main()
     {
	 int a[10][10],b[10][3],m=1,r,c,n=0,k=0,j,i;
	 clrscr();

	 printf("Enter the row=");
	 scanf("%d",&r);

	 printf("Enter the column=");
	 scanf("%d",&c);



	 for(i=1;i<=r;i++)
	      {
		for(j=1;j<=c;j++)
		  {
		     printf("a[%d][%d]=",i,j);
		     scanf("%d",&a[i][j]);
		  }
		}
	      for(i=1;i<=r;i++)
		 {
		   for(j=1;j<=c;j++)
		     {
		       printf(" %d ",a[i][j]);


		   if(a[i][j]==0)
		     {
		       n++;
		     }
		   else
		      {
			b[m][1]=a[i][j];
			b[m][2]=i;
			b[m][3]=j;
			k++;
			m++;

	      }
		   }
		   printf("\n");
		 }
	 for(m=1;m<=k;m++)
	  {
	    printf("a[%d][%d]=%d  \n",b[m][2],b[m][3],b[m][1]);

	  }

	  m=m-1;
	 printf("Total non Zero=%d \n Total  Zero=%d  \n Row=%d  \n Col=%d\n",m,n,r,c);

	 if(n>k)
	    {
	       printf("This is sparce matrix");
	    }
	 else
	     {
	       printf(" This is not sparce matrix");
	     }




     getch();
     }