#include <stdio.h>

int main() 
{
    int a[100], b[100],c[100],i,m,n;
   
    printf("Input number of elements in first array\n");
    scanf("%d", &m);
    
    printf("Input %d integers\n", m);
    for (i = 0; i < m; i++)
    {    
   	 scanf("%d", &a[i]);       
    }
    
    printf("Input number of elements in second array\n");
    scanf("%d", &n);
    
    printf("Input %d integers\n", n);
    for (i = 0; i < n; i++) 
    {    
   	 scanf("%d", &b[i]);    
    }
    for(i=0;i<m+n;i++)
    {
	c[i]=b[i];
	c[i]=a[i];
    }	
   for (i = 0; i < m+n; i++)
    {    
   	 printf("%d\t", c[i]);       
    }
    

}
