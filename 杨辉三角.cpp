#include<stdio.h>
void main()
{ 
	long i,j,n,k; 
	while(scanf("%ld",&n)!=EOF) 
	{ 
		if(n==0) break;
		for(i=1;i<=n;i++) 
		{ 
			k=1; 
			for(j=1;j<=i;j++) 
			{ 
				if(j==1) 
				{ 
					printf("%ld",k); 
				} 
				else 
				{ 
					printf(" %ld",k); 
				} 
				k=k*(i-j)/j; 
			} 
			printf("\n"); 
		} 
		printf("\n");
	} 
}

