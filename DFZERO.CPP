#include<stdio.h>
#include<conio.h>

void main()

 {
   int a[5][5],i,j,o=0;
   clrscr();

//   printf("Enter the no=");
 //  scanf("%d",&a[i][j]);


   for(i=1;i<=2;i++)
     {
       for(j=1;j<=2;j++)
	   {
	      printf("a[%d]=",i);
	      scanf("%d",&a[i][j]);
	   }
     }


   for(i=1;i<=2;i++)
     {
       for(j=1;j<=2;j++)
	  {
	   printf(" %d ",a[i][j]);
	  }
     printf("\n");
   }

for(i=1;i<=2;i++)
  {
    for(j=1;j<=2;j++)
      {
	 if(a[i][j]==0)
	     {
		o++;
	     }
	 }
    }
  printf("Total Zero=%d",o);

   getch();
   }
