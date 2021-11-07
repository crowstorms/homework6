#include<stdio.h>
main()
{
	int n,m,i,j,b[100][100],c[100],min=999;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	  for(j=0;j<m;j++) scanf("%d",&b[i][j]);
	for(j=0;j<m;j++)
	  {min=b[0][j];
	   for(i=0;i<n;i++)
	    {
	     if(b[i][j]<min) min=b[i][j];
	    } 
		c[j]=min;
		printf("%d ",c[j]);
      }
}
