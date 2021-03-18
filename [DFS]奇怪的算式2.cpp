#include <stdio.h> 
#include <stdlib.h>

void process(int *b)
{
	int left=b[0]*10000+b[1]*1000+b[2]*100+b[3]*10+b[4];
	int right=b[4]*10000+b[3]*1000+b[2]*100+b[1]*10+b[0];
	int x=right/left;
	
	if (x<10 && left*x==right)
	{
		printf("%d",left);
	}
} 

int main()
{  
	int len=10;
    int a[]={0,1,2,3,4,5,6,7,8,9};
	int b[5];
	int i,j,k,p,q;  
      
    for( i=0; i<len; i++)
	{  
		for( j=0; j<len; j++)
		{  
            if( i==j)
			    continue;  
            
			for( k=0; k<len; k++)
			{  
                if( k==i || k==j )
					continue;  
                  
                for( p=0; p<len; p++)
				{  
                    if( p==i || p==j || p==k ) 
					    continue;  
                      
                    for( q=0; q<len; q++)
					{  
                        if( q==i || q==j || q==k || q==p )
						    continue;  
						
						b[0]=a[i]; b[1]=a[j]; b[2]=a[k]; b[3]=a[p]; b[4]=a[q];

						process(b);				
                    }  
                }  
            }  
        }  
    }  
    return 0;  
}

