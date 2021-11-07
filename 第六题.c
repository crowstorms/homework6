#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int b[20][20],i,j,min,max,k,a,o=0;
	for(i=0;i<n;i++)
      for(j=0;j<m;j++) scanf("%d",&b[i][j]);
	
	for(j=0;j<m;j++)
	{
		min=b[0][j];
		for(i=0;i<n;i++)
		{
              if(b[i][j]<min) 
			  {
			    min = b[i][j];
			    k=i;
			  }
			  if(min==b[0][j]) k=0;
		}
		
		max=b[k][0];
		for(a=1;a<m;a++)
		{
              if(b[k][a]>max) max = b[k][a];
		}
		
		if(max==min)
		{
		  printf("%d",max);
		  o=1;
	    }
	}
		if(o==0) printf("No Saddle Point!"); 
}

