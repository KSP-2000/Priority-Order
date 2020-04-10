#include<stdio.h>
main()
{
	int S[20], g[20], n, i, j, temp;
	
 	printf("Enter the number of students: ");
	scanf("%d",&n);
  	
 	for(i=0;i<n;i++)
 	{
 		printf("How many gifts did S%d take: ",i+1);
 		scanf("%d",&S[i]);
	 }
    
	for(i=0;i<n;i++)
 	{
 		g[i]=S[i];
	 }		
    		
   	for(i=0;i<(n-1); i++)
	   {
    	    for(j=0;j<(n-i-1);j++)
			   {
      			if(S[j] < S[j+1])
				  {
        			temp = S[j];
        			S[j] = S[j+1];
        			S[j+1] = temp;
      			   }
      			
    	        }
  	    }
  	
  	printf("Billing Priority Order of students is: \n");
  	
  	for(i=0;i<n;i++)
	  {
    		for(j=0;j<n;j++)
			{
      			if(S[i]==g[j])
      			  printf("S%d\n",j+1);		
      		}		
       }
}

