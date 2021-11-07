#include<stdio.h>
main()
{
	int b[4][5],c[5];
	int i,j;
	for(i=0;i<4;i++) 
	  for(j=0;j<5;j++) scanf("%d",&b[i][j]);
	  
	for(i=0;i<5;i++) 
	  {c[i]=0;
	   for(j=0;j<4;j++) c[i]=c[i]+b[j][i];
	   printf("%d ",c[i]);
      }
}
