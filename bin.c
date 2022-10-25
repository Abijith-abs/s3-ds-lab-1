#include <stdio.h> 
#include <math.h> 
void main()
{ int a[20][20];
 int n,sum,i,j; 
 printf("How many binary numbers do you want to convert? :"); 
 scanf("%d",&n); 
 printf("Enter the Binary Number:\n"); 
 for(i=0;i<n;i++) 
    { 
    
    	for(j=0;j<4;j++) 
        	{ 	
                	scanf("%d",&a[i][j]); 
                    	} 
  }                   
               printf("Hexadecimal Numbers:\n");
               for(i=0;i<n;i++) 
                { 
        	sum=0; 	for(j=0;j<4;j++) 
                         	{ 
      		sum+=a[i][j]*pow(2,3-j); 
                         	} 
          	if(sum<10) 	{ 	
                                      	printf("%d\n",sum); 
                             	} 	
                     else 
     	{ 	
   	printf("%c\n",sum+55); 
	}
                         }    
                                                                            
                                                        }
