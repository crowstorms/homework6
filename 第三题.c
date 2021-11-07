#include<stdio.h>
main()
{
	int a[5][5],b[5][5];
	int n=0,i,j;
	for(i=0;i<5;i++) 
	  for(j=0;j<5;j++) scanf("%d",&a[i][j]);
	for(i=0;i<5;i++) 
	  {for(j=0;j<5;j++)
	     {if(j==i) b[i][j]=a[i][j];else if (j>i) b[i][j]=0; else b[i][j]=a[i][j]+a[j][i];
	      n++; 
	      if(n<6) printf("%d ",b[i][j]);
		    else {printf("\n");
		          printf("%d ",b[i][j]);
		          n=1;
		         }
	     }
	  }
}//  j
 //i 0 1 2 3 4 
 //  1
//   2
//   3
//   4
