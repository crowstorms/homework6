#include<stdio.h>
main()
{
	int a[4][5],b[4];
	int i,j;
	for(i=0;i<4;i++) 
	  for(j=0;j<5;j++) scanf("%d",&a[i][j]);
	  
	for(i=0;i<4;i++) 
	  {b[i]=0;
	   for(j=0;j<5;j++)
	     b[i]=b[i]+a[i][j];
	     printf("%d ",b[i]);
      }
}
