#include<stdio.h>
main()
{  int a[10][10],c[10];
   int m,n,i,j,max;
   max=0;
   scanf("%d%d",&m,&n);
   for(i=0;i<m;i++)
     for(j=0;j<n;j++)  scanf("%d",&a[i][j]);
   for(i=0;i<m;i++)
    {	for(j=0;j<n;j++) 
        if(max<a[i][j]) max=a[i][j];
        c[i]=max;
        printf("%d ",c[i]);
		max=0;
 }  
}
